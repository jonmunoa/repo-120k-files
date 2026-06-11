<template>
  <section class="panel-24541">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24541");
const base = ref(24541);
const total = computed(() => base.value * 2);

function incrementar24541() {
  base.value++;
}
</script>
