<template>
  <section class="panel-24157">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24157");
const base = ref(24157);
const total = computed(() => base.value * 2);

function incrementar24157() {
  base.value++;
}
</script>
