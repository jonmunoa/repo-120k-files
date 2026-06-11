<template>
  <section class="panel-33953">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33953");
const base = ref(33953);
const total = computed(() => base.value * 2);

function incrementar33953() {
  base.value++;
}
</script>
