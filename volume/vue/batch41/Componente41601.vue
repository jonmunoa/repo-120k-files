<template>
  <section class="panel-41601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41601");
const base = ref(41601);
const total = computed(() => base.value * 2);

function incrementar41601() {
  base.value++;
}
</script>
