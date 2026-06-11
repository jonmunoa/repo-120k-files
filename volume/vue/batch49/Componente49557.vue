<template>
  <section class="panel-49557">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49557");
const base = ref(49557);
const total = computed(() => base.value * 2);

function incrementar49557() {
  base.value++;
}
</script>
