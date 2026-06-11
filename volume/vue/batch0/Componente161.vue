<template>
  <section class="panel-161">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 161");
const base = ref(161);
const total = computed(() => base.value * 2);

function incrementar161() {
  base.value++;
}
</script>
