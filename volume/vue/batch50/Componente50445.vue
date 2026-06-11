<template>
  <section class="panel-50445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50445");
const base = ref(50445);
const total = computed(() => base.value * 2);

function incrementar50445() {
  base.value++;
}
</script>
