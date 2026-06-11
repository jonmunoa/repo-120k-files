<template>
  <section class="panel-2953">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2953");
const base = ref(2953);
const total = computed(() => base.value * 2);

function incrementar2953() {
  base.value++;
}
</script>
