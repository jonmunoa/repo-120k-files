<template>
  <section class="panel-13049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13049");
const base = ref(13049);
const total = computed(() => base.value * 2);

function incrementar13049() {
  base.value++;
}
</script>
