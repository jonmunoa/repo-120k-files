<template>
  <section class="panel-16293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16293");
const base = ref(16293);
const total = computed(() => base.value * 2);

function incrementar16293() {
  base.value++;
}
</script>
