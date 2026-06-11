<template>
  <section class="panel-14289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14289");
const base = ref(14289);
const total = computed(() => base.value * 2);

function incrementar14289() {
  base.value++;
}
</script>
