<template>
  <section class="panel-17853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17853");
const base = ref(17853);
const total = computed(() => base.value * 2);

function incrementar17853() {
  base.value++;
}
</script>
