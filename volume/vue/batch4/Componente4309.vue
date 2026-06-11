<template>
  <section class="panel-4309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4309");
const base = ref(4309);
const total = computed(() => base.value * 2);

function incrementar4309() {
  base.value++;
}
</script>
