<template>
  <section class="panel-25317">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25317");
const base = ref(25317);
const total = computed(() => base.value * 2);

function incrementar25317() {
  base.value++;
}
</script>
