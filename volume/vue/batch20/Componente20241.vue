<template>
  <section class="panel-20241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20241");
const base = ref(20241);
const total = computed(() => base.value * 2);

function incrementar20241() {
  base.value++;
}
</script>
