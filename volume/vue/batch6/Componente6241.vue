<template>
  <section class="panel-6241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6241");
const base = ref(6241);
const total = computed(() => base.value * 2);

function incrementar6241() {
  base.value++;
}
</script>
