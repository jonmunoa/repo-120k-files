<template>
  <section class="panel-30289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30289");
const base = ref(30289);
const total = computed(() => base.value * 2);

function incrementar30289() {
  base.value++;
}
</script>
