<template>
  <section class="panel-42981">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42981");
const base = ref(42981);
const total = computed(() => base.value * 2);

function incrementar42981() {
  base.value++;
}
</script>
