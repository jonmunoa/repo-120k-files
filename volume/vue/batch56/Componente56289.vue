<template>
  <section class="panel-56289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56289");
const base = ref(56289);
const total = computed(() => base.value * 2);

function incrementar56289() {
  base.value++;
}
</script>
