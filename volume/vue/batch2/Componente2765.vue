<template>
  <section class="panel-2765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2765");
const base = ref(2765);
const total = computed(() => base.value * 2);

function incrementar2765() {
  base.value++;
}
</script>
