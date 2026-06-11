<template>
  <section class="panel-25213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25213");
const base = ref(25213);
const total = computed(() => base.value * 2);

function incrementar25213() {
  base.value++;
}
</script>
