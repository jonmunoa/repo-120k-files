<template>
  <section class="panel-39853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39853");
const base = ref(39853);
const total = computed(() => base.value * 2);

function incrementar39853() {
  base.value++;
}
</script>
