<template>
  <section class="panel-50297">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50297");
const base = ref(50297);
const total = computed(() => base.value * 2);

function incrementar50297() {
  base.value++;
}
</script>
