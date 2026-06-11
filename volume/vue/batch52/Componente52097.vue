<template>
  <section class="panel-52097">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52097");
const base = ref(52097);
const total = computed(() => base.value * 2);

function incrementar52097() {
  base.value++;
}
</script>
