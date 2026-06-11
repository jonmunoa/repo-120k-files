<template>
  <section class="panel-45097">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45097");
const base = ref(45097);
const total = computed(() => base.value * 2);

function incrementar45097() {
  base.value++;
}
</script>
