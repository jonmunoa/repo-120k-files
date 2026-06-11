<template>
  <section class="panel-35749">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35749");
const base = ref(35749);
const total = computed(() => base.value * 2);

function incrementar35749() {
  base.value++;
}
</script>
