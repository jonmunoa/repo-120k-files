<template>
  <section class="panel-19589">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19589");
const base = ref(19589);
const total = computed(() => base.value * 2);

function incrementar19589() {
  base.value++;
}
</script>
