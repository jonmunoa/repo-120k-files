<template>
  <section class="panel-5113">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5113");
const base = ref(5113);
const total = computed(() => base.value * 2);

function incrementar5113() {
  base.value++;
}
</script>
