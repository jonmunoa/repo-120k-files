<template>
  <section class="panel-49097">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49097");
const base = ref(49097);
const total = computed(() => base.value * 2);

function incrementar49097() {
  base.value++;
}
</script>
