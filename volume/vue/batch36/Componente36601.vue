<template>
  <section class="panel-36601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36601");
const base = ref(36601);
const total = computed(() => base.value * 2);

function incrementar36601() {
  base.value++;
}
</script>
