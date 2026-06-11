<template>
  <section class="panel-22689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22689");
const base = ref(22689);
const total = computed(() => base.value * 2);

function incrementar22689() {
  base.value++;
}
</script>
