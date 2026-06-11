<template>
  <section class="panel-8257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8257");
const base = ref(8257);
const total = computed(() => base.value * 2);

function incrementar8257() {
  base.value++;
}
</script>
