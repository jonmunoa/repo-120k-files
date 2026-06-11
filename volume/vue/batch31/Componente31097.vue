<template>
  <section class="panel-31097">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31097");
const base = ref(31097);
const total = computed(() => base.value * 2);

function incrementar31097() {
  base.value++;
}
</script>
