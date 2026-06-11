<template>
  <section class="panel-10465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10465");
const base = ref(10465);
const total = computed(() => base.value * 2);

function incrementar10465() {
  base.value++;
}
</script>
