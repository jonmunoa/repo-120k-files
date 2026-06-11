<template>
  <section class="panel-38765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38765");
const base = ref(38765);
const total = computed(() => base.value * 2);

function incrementar38765() {
  base.value++;
}
</script>
