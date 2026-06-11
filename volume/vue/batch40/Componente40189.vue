<template>
  <section class="panel-40189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40189");
const base = ref(40189);
const total = computed(() => base.value * 2);

function incrementar40189() {
  base.value++;
}
</script>
