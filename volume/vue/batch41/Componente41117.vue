<template>
  <section class="panel-41117">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41117");
const base = ref(41117);
const total = computed(() => base.value * 2);

function incrementar41117() {
  base.value++;
}
</script>
