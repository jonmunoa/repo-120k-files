<template>
  <section class="panel-34953">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34953");
const base = ref(34953);
const total = computed(() => base.value * 2);

function incrementar34953() {
  base.value++;
}
</script>
