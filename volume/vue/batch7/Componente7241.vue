<template>
  <section class="panel-7241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7241");
const base = ref(7241);
const total = computed(() => base.value * 2);

function incrementar7241() {
  base.value++;
}
</script>
