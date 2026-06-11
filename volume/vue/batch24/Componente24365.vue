<template>
  <section class="panel-24365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24365");
const base = ref(24365);
const total = computed(() => base.value * 2);

function incrementar24365() {
  base.value++;
}
</script>
