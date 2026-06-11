<template>
  <section class="panel-23161">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23161");
const base = ref(23161);
const total = computed(() => base.value * 2);

function incrementar23161() {
  base.value++;
}
</script>
