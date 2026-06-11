<template>
  <section class="panel-32241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32241");
const base = ref(32241);
const total = computed(() => base.value * 2);

function incrementar32241() {
  base.value++;
}
</script>
