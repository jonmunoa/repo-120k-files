<template>
  <section class="panel-14357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14357");
const base = ref(14357);
const total = computed(() => base.value * 2);

function incrementar14357() {
  base.value++;
}
</script>
