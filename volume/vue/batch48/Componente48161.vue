<template>
  <section class="panel-48161">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48161");
const base = ref(48161);
const total = computed(() => base.value * 2);

function incrementar48161() {
  base.value++;
}
</script>
