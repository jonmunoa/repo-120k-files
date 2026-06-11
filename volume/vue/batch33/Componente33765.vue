<template>
  <section class="panel-33765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33765");
const base = ref(33765);
const total = computed(() => base.value * 2);

function incrementar33765() {
  base.value++;
}
</script>
