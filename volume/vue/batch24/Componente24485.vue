<template>
  <section class="panel-24485">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24485");
const base = ref(24485);
const total = computed(() => base.value * 2);

function incrementar24485() {
  base.value++;
}
</script>
