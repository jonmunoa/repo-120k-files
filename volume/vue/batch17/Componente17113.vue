<template>
  <section class="panel-17113">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17113");
const base = ref(17113);
const total = computed(() => base.value * 2);

function incrementar17113() {
  base.value++;
}
</script>
