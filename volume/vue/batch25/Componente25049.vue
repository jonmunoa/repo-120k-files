<template>
  <section class="panel-25049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25049");
const base = ref(25049);
const total = computed(() => base.value * 2);

function incrementar25049() {
  base.value++;
}
</script>
