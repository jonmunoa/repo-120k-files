<template>
  <section class="panel-41589">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41589");
const base = ref(41589);
const total = computed(() => base.value * 2);

function incrementar41589() {
  base.value++;
}
</script>
