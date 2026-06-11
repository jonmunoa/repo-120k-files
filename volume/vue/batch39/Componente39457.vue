<template>
  <section class="panel-39457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39457");
const base = ref(39457);
const total = computed(() => base.value * 2);

function incrementar39457() {
  base.value++;
}
</script>
