<template>
  <section class="panel-1489">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1489");
const base = ref(1489);
const total = computed(() => base.value * 2);

function incrementar1489() {
  base.value++;
}
</script>
