<template>
  <section class="panel-21293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21293");
const base = ref(21293);
const total = computed(() => base.value * 2);

function incrementar21293() {
  base.value++;
}
</script>
