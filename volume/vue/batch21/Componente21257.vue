<template>
  <section class="panel-21257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21257");
const base = ref(21257);
const total = computed(() => base.value * 2);

function incrementar21257() {
  base.value++;
}
</script>
