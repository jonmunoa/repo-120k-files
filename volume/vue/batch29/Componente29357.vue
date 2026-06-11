<template>
  <section class="panel-29357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29357");
const base = ref(29357);
const total = computed(() => base.value * 2);

function incrementar29357() {
  base.value++;
}
</script>
