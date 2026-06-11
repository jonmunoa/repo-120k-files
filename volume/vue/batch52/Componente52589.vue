<template>
  <section class="panel-52589">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52589");
const base = ref(52589);
const total = computed(() => base.value * 2);

function incrementar52589() {
  base.value++;
}
</script>
