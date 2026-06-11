<template>
  <section class="panel-31853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31853");
const base = ref(31853);
const total = computed(() => base.value * 2);

function incrementar31853() {
  base.value++;
}
</script>
