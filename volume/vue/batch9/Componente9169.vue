<template>
  <section class="panel-9169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9169");
const base = ref(9169);
const total = computed(() => base.value * 2);

function incrementar9169() {
  base.value++;
}
</script>
