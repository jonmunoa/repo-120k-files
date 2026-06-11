<template>
  <section class="panel-36485">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36485");
const base = ref(36485);
const total = computed(() => base.value * 2);

function incrementar36485() {
  base.value++;
}
</script>
