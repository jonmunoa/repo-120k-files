<template>
  <section class="panel-24113">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24113");
const base = ref(24113);
const total = computed(() => base.value * 2);

function incrementar24113() {
  base.value++;
}
</script>
