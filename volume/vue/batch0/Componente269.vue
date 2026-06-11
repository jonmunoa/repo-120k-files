<template>
  <section class="panel-269">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 269");
const base = ref(269);
const total = computed(() => base.value * 2);

function incrementar269() {
  base.value++;
}
</script>
