<template>
  <section class="panel-2157">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2157");
const base = ref(2157);
const total = computed(() => base.value * 2);

function incrementar2157() {
  base.value++;
}
</script>
