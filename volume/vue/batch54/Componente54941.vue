<template>
  <section class="panel-54941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54941");
const base = ref(54941);
const total = computed(() => base.value * 2);

function incrementar54941() {
  base.value++;
}
</script>
