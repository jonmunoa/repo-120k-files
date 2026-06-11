<template>
  <section class="panel-50337">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50337");
const base = ref(50337);
const total = computed(() => base.value * 2);

function incrementar50337() {
  base.value++;
}
</script>
