<template>
  <section class="panel-13685">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13685");
const base = ref(13685);
const total = computed(() => base.value * 2);

function incrementar13685() {
  base.value++;
}
</script>
