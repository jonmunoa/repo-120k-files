<template>
  <section class="panel-18705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18705");
const base = ref(18705);
const total = computed(() => base.value * 2);

function incrementar18705() {
  base.value++;
}
</script>
