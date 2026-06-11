<template>
  <section class="panel-15289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15289");
const base = ref(15289);
const total = computed(() => base.value * 2);

function incrementar15289() {
  base.value++;
}
</script>
