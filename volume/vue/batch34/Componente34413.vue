<template>
  <section class="panel-34413">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34413");
const base = ref(34413);
const total = computed(() => base.value * 2);

function incrementar34413() {
  base.value++;
}
</script>
