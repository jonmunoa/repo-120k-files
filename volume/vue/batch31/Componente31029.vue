<template>
  <section class="panel-31029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31029");
const base = ref(31029);
const total = computed(() => base.value * 2);

function incrementar31029() {
  base.value++;
}
</script>
