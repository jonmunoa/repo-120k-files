<template>
  <section class="panel-565">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 565");
const base = ref(565);
const total = computed(() => base.value * 2);

function incrementar565() {
  base.value++;
}
</script>
