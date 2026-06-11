<template>
  <section class="panel-12837">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12837");
const base = ref(12837);
const total = computed(() => base.value * 2);

function incrementar12837() {
  base.value++;
}
</script>
