<template>
  <section class="panel-52161">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52161");
const base = ref(52161);
const total = computed(() => base.value * 2);

function incrementar52161() {
  base.value++;
}
</script>
