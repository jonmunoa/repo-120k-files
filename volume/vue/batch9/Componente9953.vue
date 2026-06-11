<template>
  <section class="panel-9953">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9953");
const base = ref(9953);
const total = computed(() => base.value * 2);

function incrementar9953() {
  base.value++;
}
</script>
