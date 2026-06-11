<template>
  <section class="panel-12337">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12337");
const base = ref(12337);
const total = computed(() => base.value * 2);

function incrementar12337() {
  base.value++;
}
</script>
