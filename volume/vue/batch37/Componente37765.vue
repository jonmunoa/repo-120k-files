<template>
  <section class="panel-37765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37765");
const base = ref(37765);
const total = computed(() => base.value * 2);

function incrementar37765() {
  base.value++;
}
</script>
