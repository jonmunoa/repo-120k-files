<template>
  <section class="panel-15049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15049");
const base = ref(15049);
const total = computed(() => base.value * 2);

function incrementar15049() {
  base.value++;
}
</script>
