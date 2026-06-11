<template>
  <section class="panel-19357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19357");
const base = ref(19357);
const total = computed(() => base.value * 2);

function incrementar19357() {
  base.value++;
}
</script>
