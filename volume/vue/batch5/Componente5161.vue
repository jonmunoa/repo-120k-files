<template>
  <section class="panel-5161">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5161");
const base = ref(5161);
const total = computed(() => base.value * 2);

function incrementar5161() {
  base.value++;
}
</script>
