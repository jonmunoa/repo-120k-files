<template>
  <section class="panel-32601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32601");
const base = ref(32601);
const total = computed(() => base.value * 2);

function incrementar32601() {
  base.value++;
}
</script>
