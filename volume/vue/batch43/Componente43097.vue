<template>
  <section class="panel-43097">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43097");
const base = ref(43097);
const total = computed(() => base.value * 2);

function incrementar43097() {
  base.value++;
}
</script>
