<template>
  <section class="panel-38785">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38785");
const base = ref(38785);
const total = computed(() => base.value * 2);

function incrementar38785() {
  base.value++;
}
</script>
