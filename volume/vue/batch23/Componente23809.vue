<template>
  <section class="panel-23809">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23809");
const base = ref(23809);
const total = computed(() => base.value * 2);

function incrementar23809() {
  base.value++;
}
</script>
