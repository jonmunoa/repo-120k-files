<template>
  <section class="panel-4765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4765");
const base = ref(4765);
const total = computed(() => base.value * 2);

function incrementar4765() {
  base.value++;
}
</script>
