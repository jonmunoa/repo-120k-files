<template>
  <section class="panel-32785">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32785");
const base = ref(32785);
const total = computed(() => base.value * 2);

function incrementar32785() {
  base.value++;
}
</script>
