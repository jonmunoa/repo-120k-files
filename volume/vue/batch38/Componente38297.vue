<template>
  <section class="panel-38297">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38297");
const base = ref(38297);
const total = computed(() => base.value * 2);

function incrementar38297() {
  base.value++;
}
</script>
