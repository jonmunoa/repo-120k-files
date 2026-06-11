<template>
  <section class="panel-33209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33209");
const base = ref(33209);
const total = computed(() => base.value * 2);

function incrementar33209() {
  base.value++;
}
</script>
