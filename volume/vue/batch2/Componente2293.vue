<template>
  <section class="panel-2293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2293");
const base = ref(2293);
const total = computed(() => base.value * 2);

function incrementar2293() {
  base.value++;
}
</script>
