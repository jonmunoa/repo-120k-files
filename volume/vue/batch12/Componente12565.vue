<template>
  <section class="panel-12565">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12565");
const base = ref(12565);
const total = computed(() => base.value * 2);

function incrementar12565() {
  base.value++;
}
</script>
