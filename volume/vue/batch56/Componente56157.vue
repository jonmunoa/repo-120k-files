<template>
  <section class="panel-56157">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56157");
const base = ref(56157);
const total = computed(() => base.value * 2);

function incrementar56157() {
  base.value++;
}
</script>
