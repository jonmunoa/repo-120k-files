<template>
  <section class="panel-3421">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3421");
const base = ref(3421);
const total = computed(() => base.value * 2);

function incrementar3421() {
  base.value++;
}
</script>
