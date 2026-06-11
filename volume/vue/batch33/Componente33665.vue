<template>
  <section class="panel-33665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33665");
const base = ref(33665);
const total = computed(() => base.value * 2);

function incrementar33665() {
  base.value++;
}
</script>
