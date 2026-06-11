<template>
  <section class="panel-15157">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15157");
const base = ref(15157);
const total = computed(() => base.value * 2);

function incrementar15157() {
  base.value++;
}
</script>
