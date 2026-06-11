<template>
  <section class="panel-48173">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48173");
const base = ref(48173);
const total = computed(() => base.value * 2);

function incrementar48173() {
  base.value++;
}
</script>
