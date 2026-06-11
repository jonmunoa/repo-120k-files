<template>
  <section class="panel-43657">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43657");
const base = ref(43657);
const total = computed(() => base.value * 2);

function incrementar43657() {
  base.value++;
}
</script>
