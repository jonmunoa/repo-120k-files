<template>
  <section class="panel-32289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32289");
const base = ref(32289);
const total = computed(() => base.value * 2);

function incrementar32289() {
  base.value++;
}
</script>
