<template>
  <section class="panel-30337">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30337");
const base = ref(30337);
const total = computed(() => base.value * 2);

function incrementar30337() {
  base.value++;
}
</script>
