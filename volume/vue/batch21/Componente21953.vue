<template>
  <section class="panel-21953">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21953");
const base = ref(21953);
const total = computed(() => base.value * 2);

function incrementar21953() {
  base.value++;
}
</script>
