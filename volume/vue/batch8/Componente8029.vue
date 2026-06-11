<template>
  <section class="panel-8029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8029");
const base = ref(8029);
const total = computed(() => base.value * 2);

function incrementar8029() {
  base.value++;
}
</script>
