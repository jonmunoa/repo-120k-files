<template>
  <section class="panel-28029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28029");
const base = ref(28029);
const total = computed(() => base.value * 2);

function incrementar28029() {
  base.value++;
}
</script>
