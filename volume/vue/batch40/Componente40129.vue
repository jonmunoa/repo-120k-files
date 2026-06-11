<template>
  <section class="panel-40129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40129");
const base = ref(40129);
const total = computed(() => base.value * 2);

function incrementar40129() {
  base.value++;
}
</script>
