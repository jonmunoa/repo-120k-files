<template>
  <section class="panel-53161">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53161");
const base = ref(53161);
const total = computed(() => base.value * 2);

function incrementar53161() {
  base.value++;
}
</script>
