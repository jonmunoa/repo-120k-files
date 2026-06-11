<template>
  <section class="panel-54161">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54161");
const base = ref(54161);
const total = computed(() => base.value * 2);

function incrementar54161() {
  base.value++;
}
</script>
