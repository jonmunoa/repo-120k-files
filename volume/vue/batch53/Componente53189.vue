<template>
  <section class="panel-53189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53189");
const base = ref(53189);
const total = computed(() => base.value * 2);

function incrementar53189() {
  base.value++;
}
</script>
