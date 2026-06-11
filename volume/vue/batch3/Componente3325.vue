<template>
  <section class="panel-3325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3325");
const base = ref(3325);
const total = computed(() => base.value * 2);

function incrementar3325() {
  base.value++;
}
</script>
