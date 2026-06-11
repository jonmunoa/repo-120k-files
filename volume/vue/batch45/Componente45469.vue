<template>
  <section class="panel-45469">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45469");
const base = ref(45469);
const total = computed(() => base.value * 2);

function incrementar45469() {
  base.value++;
}
</script>
