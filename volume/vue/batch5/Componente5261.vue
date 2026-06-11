<template>
  <section class="panel-5261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5261");
const base = ref(5261);
const total = computed(() => base.value * 2);

function incrementar5261() {
  base.value++;
}
</script>
