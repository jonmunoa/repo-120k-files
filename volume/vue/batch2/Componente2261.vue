<template>
  <section class="panel-2261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2261");
const base = ref(2261);
const total = computed(() => base.value * 2);

function incrementar2261() {
  base.value++;
}
</script>
