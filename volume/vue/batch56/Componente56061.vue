<template>
  <section class="panel-56061">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56061");
const base = ref(56061);
const total = computed(() => base.value * 2);

function incrementar56061() {
  base.value++;
}
</script>
