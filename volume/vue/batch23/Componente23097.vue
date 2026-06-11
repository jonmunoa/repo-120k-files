<template>
  <section class="panel-23097">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23097");
const base = ref(23097);
const total = computed(() => base.value * 2);

function incrementar23097() {
  base.value++;
}
</script>
