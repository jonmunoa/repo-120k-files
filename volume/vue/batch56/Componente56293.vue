<template>
  <section class="panel-56293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56293");
const base = ref(56293);
const total = computed(() => base.value * 2);

function incrementar56293() {
  base.value++;
}
</script>
