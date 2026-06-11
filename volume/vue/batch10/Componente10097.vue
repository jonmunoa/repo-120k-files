<template>
  <section class="panel-10097">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10097");
const base = ref(10097);
const total = computed(() => base.value * 2);

function incrementar10097() {
  base.value++;
}
</script>
