<template>
  <section class="panel-51241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51241");
const base = ref(51241);
const total = computed(() => base.value * 2);

function incrementar51241() {
  base.value++;
}
</script>
