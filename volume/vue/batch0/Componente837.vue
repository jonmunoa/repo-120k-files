<template>
  <section class="panel-837">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 837");
const base = ref(837);
const total = computed(() => base.value * 2);

function incrementar837() {
  base.value++;
}
</script>
