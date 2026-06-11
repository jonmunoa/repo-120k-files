<template>
  <section class="panel-53057">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53057");
const base = ref(53057);
const total = computed(() => base.value * 2);

function incrementar53057() {
  base.value++;
}
</script>
