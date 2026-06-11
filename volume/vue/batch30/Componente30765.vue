<template>
  <section class="panel-30765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30765");
const base = ref(30765);
const total = computed(() => base.value * 2);

function incrementar30765() {
  base.value++;
}
</script>
