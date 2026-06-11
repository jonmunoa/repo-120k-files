<template>
  <section class="panel-5097">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5097");
const base = ref(5097);
const total = computed(() => base.value * 2);

function incrementar5097() {
  base.value++;
}
</script>
