<template>
  <section class="panel-1097">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1097");
const base = ref(1097);
const total = computed(() => base.value * 2);

function incrementar1097() {
  base.value++;
}
</script>
