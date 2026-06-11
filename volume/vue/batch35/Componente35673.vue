<template>
  <section class="panel-35673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35673");
const base = ref(35673);
const total = computed(() => base.value * 2);

function incrementar35673() {
  base.value++;
}
</script>
