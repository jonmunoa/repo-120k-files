<template>
  <section class="panel-35341">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35341");
const base = ref(35341);
const total = computed(() => base.value * 2);

function incrementar35341() {
  base.value++;
}
</script>
