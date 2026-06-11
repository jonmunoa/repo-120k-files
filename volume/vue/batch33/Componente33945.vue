<template>
  <section class="panel-33945">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33945");
const base = ref(33945);
const total = computed(() => base.value * 2);

function incrementar33945() {
  base.value++;
}
</script>
