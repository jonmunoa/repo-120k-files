<template>
  <section class="panel-12945">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12945");
const base = ref(12945);
const total = computed(() => base.value * 2);

function incrementar12945() {
  base.value++;
}
</script>
