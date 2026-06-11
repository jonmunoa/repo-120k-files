<template>
  <section class="panel-30853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30853");
const base = ref(30853);
const total = computed(() => base.value * 2);

function incrementar30853() {
  base.value++;
}
</script>
