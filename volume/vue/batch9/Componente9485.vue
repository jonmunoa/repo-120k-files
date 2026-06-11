<template>
  <section class="panel-9485">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9485");
const base = ref(9485);
const total = computed(() => base.value * 2);

function incrementar9485() {
  base.value++;
}
</script>
