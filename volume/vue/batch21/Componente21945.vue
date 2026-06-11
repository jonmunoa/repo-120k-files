<template>
  <section class="panel-21945">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21945");
const base = ref(21945);
const total = computed(() => base.value * 2);

function incrementar21945() {
  base.value++;
}
</script>
