<template>
  <section class="panel-7261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7261");
const base = ref(7261);
const total = computed(() => base.value * 2);

function incrementar7261() {
  base.value++;
}
</script>
