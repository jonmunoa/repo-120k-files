<template>
  <section class="panel-19829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19829");
const base = ref(19829);
const total = computed(() => base.value * 2);

function incrementar19829() {
  base.value++;
}
</script>
