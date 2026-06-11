<template>
  <section class="panel-33289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33289");
const base = ref(33289);
const total = computed(() => base.value * 2);

function incrementar33289() {
  base.value++;
}
</script>
