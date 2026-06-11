<template>
  <section class="panel-27029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27029");
const base = ref(27029);
const total = computed(() => base.value * 2);

function incrementar27029() {
  base.value++;
}
</script>
