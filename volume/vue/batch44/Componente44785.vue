<template>
  <section class="panel-44785">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44785");
const base = ref(44785);
const total = computed(() => base.value * 2);

function incrementar44785() {
  base.value++;
}
</script>
