<template>
  <section class="panel-11629">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11629");
const base = ref(11629);
const total = computed(() => base.value * 2);

function incrementar11629() {
  base.value++;
}
</script>
