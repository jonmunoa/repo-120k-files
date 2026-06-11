<template>
  <section class="panel-41809">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41809");
const base = ref(41809);
const total = computed(() => base.value * 2);

function incrementar41809() {
  base.value++;
}
</script>
