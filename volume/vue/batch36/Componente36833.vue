<template>
  <section class="panel-36833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36833");
const base = ref(36833);
const total = computed(() => base.value * 2);

function incrementar36833() {
  base.value++;
}
</script>
