<template>
  <section class="panel-50229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50229");
const base = ref(50229);
const total = computed(() => base.value * 2);

function incrementar50229() {
  base.value++;
}
</script>
