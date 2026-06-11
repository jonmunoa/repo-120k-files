<template>
  <section class="panel-50601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50601");
const base = ref(50601);
const total = computed(() => base.value * 2);

function incrementar50601() {
  base.value++;
}
</script>
