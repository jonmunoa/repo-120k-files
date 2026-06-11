<template>
  <section class="panel-49945">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49945");
const base = ref(49945);
const total = computed(() => base.value * 2);

function incrementar49945() {
  base.value++;
}
</script>
