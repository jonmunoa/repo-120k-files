<template>
  <section class="panel-5469">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5469");
const base = ref(5469);
const total = computed(() => base.value * 2);

function incrementar5469() {
  base.value++;
}
</script>
