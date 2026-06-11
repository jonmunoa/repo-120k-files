<template>
  <section class="panel-48365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48365");
const base = ref(48365);
const total = computed(() => base.value * 2);

function incrementar48365() {
  base.value++;
}
</script>
