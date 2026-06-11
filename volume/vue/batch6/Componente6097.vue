<template>
  <section class="panel-6097">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6097");
const base = ref(6097);
const total = computed(() => base.value * 2);

function incrementar6097() {
  base.value++;
}
</script>
