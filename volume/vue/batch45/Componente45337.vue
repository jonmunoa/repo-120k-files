<template>
  <section class="panel-45337">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45337");
const base = ref(45337);
const total = computed(() => base.value * 2);

function incrementar45337() {
  base.value++;
}
</script>
