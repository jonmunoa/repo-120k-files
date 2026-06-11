<template>
  <section class="panel-17357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17357");
const base = ref(17357);
const total = computed(() => base.value * 2);

function incrementar17357() {
  base.value++;
}
</script>
