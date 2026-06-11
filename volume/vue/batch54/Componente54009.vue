<template>
  <section class="panel-54009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54009");
const base = ref(54009);
const total = computed(() => base.value * 2);

function incrementar54009() {
  base.value++;
}
</script>
