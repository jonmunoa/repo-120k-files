<template>
  <section class="panel-49657">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49657");
const base = ref(49657);
const total = computed(() => base.value * 2);

function incrementar49657() {
  base.value++;
}
</script>
