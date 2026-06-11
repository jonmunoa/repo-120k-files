<template>
  <section class="panel-55049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55049");
const base = ref(55049);
const total = computed(() => base.value * 2);

function incrementar55049() {
  base.value++;
}
</script>
