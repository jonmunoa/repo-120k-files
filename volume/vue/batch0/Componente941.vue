<template>
  <section class="panel-941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 941");
const base = ref(941);
const total = computed(() => base.value * 2);

function incrementar941() {
  base.value++;
}
</script>
