<template>
  <section class="panel-8629">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8629");
const base = ref(8629);
const total = computed(() => base.value * 2);

function incrementar8629() {
  base.value++;
}
</script>
