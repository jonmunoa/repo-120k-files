<template>
  <section class="panel-13965">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13965");
const base = ref(13965);
const total = computed(() => base.value * 2);

function incrementar13965() {
  base.value++;
}
</script>
