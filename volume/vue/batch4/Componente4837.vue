<template>
  <section class="panel-4837">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4837");
const base = ref(4837);
const total = computed(() => base.value * 2);

function incrementar4837() {
  base.value++;
}
</script>
