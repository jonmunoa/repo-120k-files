<template>
  <section class="panel-24589">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24589");
const base = ref(24589);
const total = computed(() => base.value * 2);

function incrementar24589() {
  base.value++;
}
</script>
