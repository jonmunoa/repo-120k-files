<template>
  <section class="panel-31113">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31113");
const base = ref(31113);
const total = computed(() => base.value * 2);

function incrementar31113() {
  base.value++;
}
</script>
