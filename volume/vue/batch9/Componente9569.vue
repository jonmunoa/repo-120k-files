<template>
  <section class="panel-9569">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9569");
const base = ref(9569);
const total = computed(() => base.value * 2);

function incrementar9569() {
  base.value++;
}
</script>
