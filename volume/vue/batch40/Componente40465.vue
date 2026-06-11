<template>
  <section class="panel-40465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40465");
const base = ref(40465);
const total = computed(() => base.value * 2);

function incrementar40465() {
  base.value++;
}
</script>
