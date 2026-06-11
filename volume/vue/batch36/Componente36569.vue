<template>
  <section class="panel-36569">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36569");
const base = ref(36569);
const total = computed(() => base.value * 2);

function incrementar36569() {
  base.value++;
}
</script>
