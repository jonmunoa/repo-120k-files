<template>
  <section class="panel-14029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14029");
const base = ref(14029);
const total = computed(() => base.value * 2);

function incrementar14029() {
  base.value++;
}
</script>
