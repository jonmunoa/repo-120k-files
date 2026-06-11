<template>
  <section class="panel-14257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14257");
const base = ref(14257);
const total = computed(() => base.value * 2);

function incrementar14257() {
  base.value++;
}
</script>
