<template>
  <section class="panel-54017">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54017");
const base = ref(54017);
const total = computed(() => base.value * 2);

function incrementar54017() {
  base.value++;
}
</script>
