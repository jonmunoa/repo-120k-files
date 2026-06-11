<template>
  <section class="panel-33113">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33113");
const base = ref(33113);
const total = computed(() => base.value * 2);

function incrementar33113() {
  base.value++;
}
</script>
