<template>
  <section class="panel-19289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19289");
const base = ref(19289);
const total = computed(() => base.value * 2);

function incrementar19289() {
  base.value++;
}
</script>
