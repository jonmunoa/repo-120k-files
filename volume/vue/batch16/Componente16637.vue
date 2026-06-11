<template>
  <section class="panel-16637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16637");
const base = ref(16637);
const total = computed(() => base.value * 2);

function incrementar16637() {
  base.value++;
}
</script>
