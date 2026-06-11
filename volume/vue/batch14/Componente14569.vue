<template>
  <section class="panel-14569">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14569");
const base = ref(14569);
const total = computed(() => base.value * 2);

function incrementar14569() {
  base.value++;
}
</script>
