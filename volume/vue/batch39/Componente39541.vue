<template>
  <section class="panel-39541">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39541");
const base = ref(39541);
const total = computed(() => base.value * 2);

function incrementar39541() {
  base.value++;
}
</script>
