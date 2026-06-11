<template>
  <section class="panel-7953">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7953");
const base = ref(7953);
const total = computed(() => base.value * 2);

function incrementar7953() {
  base.value++;
}
</script>
