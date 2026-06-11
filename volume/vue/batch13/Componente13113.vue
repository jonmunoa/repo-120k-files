<template>
  <section class="panel-13113">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13113");
const base = ref(13113);
const total = computed(() => base.value * 2);

function incrementar13113() {
  base.value++;
}
</script>
