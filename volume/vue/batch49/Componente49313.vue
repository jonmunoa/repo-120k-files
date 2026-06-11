<template>
  <section class="panel-49313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49313");
const base = ref(49313);
const total = computed(() => base.value * 2);

function incrementar49313() {
  base.value++;
}
</script>
