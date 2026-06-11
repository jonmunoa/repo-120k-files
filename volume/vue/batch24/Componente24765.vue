<template>
  <section class="panel-24765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24765");
const base = ref(24765);
const total = computed(() => base.value * 2);

function incrementar24765() {
  base.value++;
}
</script>
