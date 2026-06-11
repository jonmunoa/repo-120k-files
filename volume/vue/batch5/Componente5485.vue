<template>
  <section class="panel-5485">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5485");
const base = ref(5485);
const total = computed(() => base.value * 2);

function incrementar5485() {
  base.value++;
}
</script>
