<template>
  <section class="panel-19261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19261");
const base = ref(19261);
const total = computed(() => base.value * 2);

function incrementar19261() {
  base.value++;
}
</script>
