<template>
  <section class="panel-39293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39293");
const base = ref(39293);
const total = computed(() => base.value * 2);

function incrementar39293() {
  base.value++;
}
</script>
