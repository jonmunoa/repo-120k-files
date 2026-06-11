<template>
  <section class="panel-629">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 629");
const base = ref(629);
const total = computed(() => base.value * 2);

function incrementar629() {
  base.value++;
}
</script>
