<template>
  <section class="panel-2145">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2145");
const base = ref(2145);
const total = computed(() => base.value * 2);

function incrementar2145() {
  base.value++;
}
</script>
