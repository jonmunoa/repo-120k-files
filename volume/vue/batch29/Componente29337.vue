<template>
  <section class="panel-29337">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29337");
const base = ref(29337);
const total = computed(() => base.value * 2);

function incrementar29337() {
  base.value++;
}
</script>
