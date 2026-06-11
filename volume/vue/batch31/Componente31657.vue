<template>
  <section class="panel-31657">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31657");
const base = ref(31657);
const total = computed(() => base.value * 2);

function incrementar31657() {
  base.value++;
}
</script>
