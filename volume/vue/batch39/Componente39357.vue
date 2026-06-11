<template>
  <section class="panel-39357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39357");
const base = ref(39357);
const total = computed(() => base.value * 2);

function incrementar39357() {
  base.value++;
}
</script>
