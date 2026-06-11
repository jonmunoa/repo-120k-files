<template>
  <section class="panel-50569">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50569");
const base = ref(50569);
const total = computed(() => base.value * 2);

function incrementar50569() {
  base.value++;
}
</script>
