<template>
  <section class="panel-50705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50705");
const base = ref(50705);
const total = computed(() => base.value * 2);

function incrementar50705() {
  base.value++;
}
</script>
