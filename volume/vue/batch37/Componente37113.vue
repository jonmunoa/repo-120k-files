<template>
  <section class="panel-37113">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37113");
const base = ref(37113);
const total = computed(() => base.value * 2);

function incrementar37113() {
  base.value++;
}
</script>
