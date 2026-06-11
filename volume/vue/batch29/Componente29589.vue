<template>
  <section class="panel-29589">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29589");
const base = ref(29589);
const total = computed(() => base.value * 2);

function incrementar29589() {
  base.value++;
}
</script>
