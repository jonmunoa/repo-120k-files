<template>
  <section class="panel-16393">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16393");
const base = ref(16393);
const total = computed(() => base.value * 2);

function incrementar16393() {
  base.value++;
}
</script>
