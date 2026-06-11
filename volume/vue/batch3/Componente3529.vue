<template>
  <section class="panel-3529">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3529");
const base = ref(3529);
const total = computed(() => base.value * 2);

function incrementar3529() {
  base.value++;
}
</script>
