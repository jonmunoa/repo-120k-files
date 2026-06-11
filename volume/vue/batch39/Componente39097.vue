<template>
  <section class="panel-39097">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39097");
const base = ref(39097);
const total = computed(() => base.value * 2);

function incrementar39097() {
  base.value++;
}
</script>
