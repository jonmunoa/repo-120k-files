<template>
  <section class="panel-19457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19457");
const base = ref(19457);
const total = computed(() => base.value * 2);

function incrementar19457() {
  base.value++;
}
</script>
