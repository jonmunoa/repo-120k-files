<template>
  <section class="panel-31157">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31157");
const base = ref(31157);
const total = computed(() => base.value * 2);

function incrementar31157() {
  base.value++;
}
</script>
