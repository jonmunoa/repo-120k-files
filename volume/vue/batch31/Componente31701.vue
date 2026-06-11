<template>
  <section class="panel-31701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31701");
const base = ref(31701);
const total = computed(() => base.value * 2);

function incrementar31701() {
  base.value++;
}
</script>
