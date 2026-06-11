<template>
  <section class="panel-56469">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56469");
const base = ref(56469);
const total = computed(() => base.value * 2);

function incrementar56469() {
  base.value++;
}
</script>
