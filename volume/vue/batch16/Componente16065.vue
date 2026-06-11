<template>
  <section class="panel-16065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16065");
const base = ref(16065);
const total = computed(() => base.value * 2);

function incrementar16065() {
  base.value++;
}
</script>
