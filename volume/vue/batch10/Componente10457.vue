<template>
  <section class="panel-10457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10457");
const base = ref(10457);
const total = computed(() => base.value * 2);

function incrementar10457() {
  base.value++;
}
</script>
