<template>
  <section class="panel-53261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53261");
const base = ref(53261);
const total = computed(() => base.value * 2);

function incrementar53261() {
  base.value++;
}
</script>
