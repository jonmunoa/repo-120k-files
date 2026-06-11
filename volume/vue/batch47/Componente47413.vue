<template>
  <section class="panel-47413">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47413");
const base = ref(47413);
const total = computed(() => base.value * 2);

function incrementar47413() {
  base.value++;
}
</script>
