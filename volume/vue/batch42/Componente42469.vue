<template>
  <section class="panel-42469">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42469");
const base = ref(42469);
const total = computed(() => base.value * 2);

function incrementar42469() {
  base.value++;
}
</script>
