<template>
  <section class="panel-19657">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19657");
const base = ref(19657);
const total = computed(() => base.value * 2);

function incrementar19657() {
  base.value++;
}
</script>
