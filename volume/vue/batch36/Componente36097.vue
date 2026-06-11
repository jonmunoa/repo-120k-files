<template>
  <section class="panel-36097">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36097");
const base = ref(36097);
const total = computed(() => base.value * 2);

function incrementar36097() {
  base.value++;
}
</script>
