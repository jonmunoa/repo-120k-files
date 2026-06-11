<template>
  <section class="panel-20157">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20157");
const base = ref(20157);
const total = computed(() => base.value * 2);

function incrementar20157() {
  base.value++;
}
</script>
