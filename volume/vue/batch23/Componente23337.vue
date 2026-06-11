<template>
  <section class="panel-23337">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23337");
const base = ref(23337);
const total = computed(() => base.value * 2);

function incrementar23337() {
  base.value++;
}
</script>
