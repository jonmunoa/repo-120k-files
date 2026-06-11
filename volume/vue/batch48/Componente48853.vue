<template>
  <section class="panel-48853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48853");
const base = ref(48853);
const total = computed(() => base.value * 2);

function incrementar48853() {
  base.value++;
}
</script>
