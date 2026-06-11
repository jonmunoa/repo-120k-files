<template>
  <section class="panel-41569">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41569");
const base = ref(41569);
const total = computed(() => base.value * 2);

function incrementar41569() {
  base.value++;
}
</script>
