<template>
  <section class="panel-50365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50365");
const base = ref(50365);
const total = computed(() => base.value * 2);

function incrementar50365() {
  base.value++;
}
</script>
