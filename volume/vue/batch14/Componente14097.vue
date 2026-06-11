<template>
  <section class="panel-14097">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14097");
const base = ref(14097);
const total = computed(() => base.value * 2);

function incrementar14097() {
  base.value++;
}
</script>
