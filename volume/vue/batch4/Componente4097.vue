<template>
  <section class="panel-4097">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4097");
const base = ref(4097);
const total = computed(() => base.value * 2);

function incrementar4097() {
  base.value++;
}
</script>
