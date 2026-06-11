<template>
  <section class="panel-7853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7853");
const base = ref(7853);
const total = computed(() => base.value * 2);

function incrementar7853() {
  base.value++;
}
</script>
