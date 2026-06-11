<template>
  <section class="panel-50241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50241");
const base = ref(50241);
const total = computed(() => base.value * 2);

function incrementar50241() {
  base.value++;
}
</script>
