<template>
  <section class="panel-30997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30997");
const base = ref(30997);
const total = computed(() => base.value * 2);

function incrementar30997() {
  base.value++;
}
</script>
