<template>
  <section class="panel-7049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7049");
const base = ref(7049);
const total = computed(() => base.value * 2);

function incrementar7049() {
  base.value++;
}
</script>
