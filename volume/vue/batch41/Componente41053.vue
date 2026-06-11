<template>
  <section class="panel-41053">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41053");
const base = ref(41053);
const total = computed(() => base.value * 2);

function incrementar41053() {
  base.value++;
}
</script>
