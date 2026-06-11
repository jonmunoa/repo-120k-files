<template>
  <section class="panel-7289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7289");
const base = ref(7289);
const total = computed(() => base.value * 2);

function incrementar7289() {
  base.value++;
}
</script>
