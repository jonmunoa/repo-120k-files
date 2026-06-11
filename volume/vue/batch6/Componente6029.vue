<template>
  <section class="panel-6029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6029");
const base = ref(6029);
const total = computed(() => base.value * 2);

function incrementar6029() {
  base.value++;
}
</script>
