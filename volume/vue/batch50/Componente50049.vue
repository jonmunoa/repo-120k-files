<template>
  <section class="panel-50049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50049");
const base = ref(50049);
const total = computed(() => base.value * 2);

function incrementar50049() {
  base.value++;
}
</script>
