<template>
  <section class="panel-10229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10229");
const base = ref(10229);
const total = computed(() => base.value * 2);

function incrementar10229() {
  base.value++;
}
</script>
