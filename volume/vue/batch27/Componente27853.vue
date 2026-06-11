<template>
  <section class="panel-27853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27853");
const base = ref(27853);
const total = computed(() => base.value * 2);

function incrementar27853() {
  base.value++;
}
</script>
