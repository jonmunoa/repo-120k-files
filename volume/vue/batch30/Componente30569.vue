<template>
  <section class="panel-30569">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30569");
const base = ref(30569);
const total = computed(() => base.value * 2);

function incrementar30569() {
  base.value++;
}
</script>
