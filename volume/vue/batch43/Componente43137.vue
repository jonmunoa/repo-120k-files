<template>
  <section class="panel-43137">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43137");
const base = ref(43137);
const total = computed(() => base.value * 2);

function incrementar43137() {
  base.value++;
}
</script>
