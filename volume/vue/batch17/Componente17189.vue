<template>
  <section class="panel-17189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17189");
const base = ref(17189);
const total = computed(() => base.value * 2);

function incrementar17189() {
  base.value++;
}
</script>
