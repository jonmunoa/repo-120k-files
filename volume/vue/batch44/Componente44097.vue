<template>
  <section class="panel-44097">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44097");
const base = ref(44097);
const total = computed(() => base.value * 2);

function incrementar44097() {
  base.value++;
}
</script>
