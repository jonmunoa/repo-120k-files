<template>
  <section class="panel-41765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41765");
const base = ref(41765);
const total = computed(() => base.value * 2);

function incrementar41765() {
  base.value++;
}
</script>
