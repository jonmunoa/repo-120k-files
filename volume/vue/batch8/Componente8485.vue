<template>
  <section class="panel-8485">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8485");
const base = ref(8485);
const total = computed(() => base.value * 2);

function incrementar8485() {
  base.value++;
}
</script>
