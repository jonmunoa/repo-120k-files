<template>
  <section class="panel-10589">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10589");
const base = ref(10589);
const total = computed(() => base.value * 2);

function incrementar10589() {
  base.value++;
}
</script>
