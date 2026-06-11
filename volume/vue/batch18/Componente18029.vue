<template>
  <section class="panel-18029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18029");
const base = ref(18029);
const total = computed(() => base.value * 2);

function incrementar18029() {
  base.value++;
}
</script>
