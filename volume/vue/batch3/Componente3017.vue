<template>
  <section class="panel-3017">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3017");
const base = ref(3017);
const total = computed(() => base.value * 2);

function incrementar3017() {
  base.value++;
}
</script>
