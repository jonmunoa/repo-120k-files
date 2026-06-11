<template>
  <section class="panel-41413">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41413");
const base = ref(41413);
const total = computed(() => base.value * 2);

function incrementar41413() {
  base.value++;
}
</script>
