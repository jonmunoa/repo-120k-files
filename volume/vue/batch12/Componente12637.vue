<template>
  <section class="panel-12637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12637");
const base = ref(12637);
const total = computed(() => base.value * 2);

function incrementar12637() {
  base.value++;
}
</script>
