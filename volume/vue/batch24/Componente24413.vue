<template>
  <section class="panel-24413">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24413");
const base = ref(24413);
const total = computed(() => base.value * 2);

function incrementar24413() {
  base.value++;
}
</script>
