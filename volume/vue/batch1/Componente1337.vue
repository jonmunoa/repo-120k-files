<template>
  <section class="panel-1337">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1337");
const base = ref(1337);
const total = computed(() => base.value * 2);

function incrementar1337() {
  base.value++;
}
</script>
