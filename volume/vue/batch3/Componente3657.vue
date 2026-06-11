<template>
  <section class="panel-3657">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3657");
const base = ref(3657);
const total = computed(() => base.value * 2);

function incrementar3657() {
  base.value++;
}
</script>
