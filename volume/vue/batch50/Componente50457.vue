<template>
  <section class="panel-50457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50457");
const base = ref(50457);
const total = computed(() => base.value * 2);

function incrementar50457() {
  base.value++;
}
</script>
