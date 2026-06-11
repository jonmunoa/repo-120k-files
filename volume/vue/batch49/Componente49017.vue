<template>
  <section class="panel-49017">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49017");
const base = ref(49017);
const total = computed(() => base.value * 2);

function incrementar49017() {
  base.value++;
}
</script>
