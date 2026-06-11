<template>
  <section class="panel-997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 997");
const base = ref(997);
const total = computed(() => base.value * 2);

function incrementar997() {
  base.value++;
}
</script>
