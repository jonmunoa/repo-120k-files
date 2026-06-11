<template>
  <section class="panel-41113">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41113");
const base = ref(41113);
const total = computed(() => base.value * 2);

function incrementar41113() {
  base.value++;
}
</script>
