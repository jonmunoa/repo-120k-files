<template>
  <section class="panel-47189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47189");
const base = ref(47189);
const total = computed(() => base.value * 2);

function incrementar47189() {
  base.value++;
}
</script>
