<template>
  <section class="panel-1113">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1113");
const base = ref(1113);
const total = computed(() => base.value * 2);

function incrementar1113() {
  base.value++;
}
</script>
