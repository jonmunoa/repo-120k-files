<template>
  <section class="panel-25309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25309");
const base = ref(25309);
const total = computed(() => base.value * 2);

function incrementar25309() {
  base.value++;
}
</script>
