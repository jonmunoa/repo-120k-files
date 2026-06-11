<template>
  <section class="panel-1157">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1157");
const base = ref(1157);
const total = computed(() => base.value * 2);

function incrementar1157() {
  base.value++;
}
</script>
