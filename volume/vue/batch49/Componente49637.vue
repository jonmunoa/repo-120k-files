<template>
  <section class="panel-49637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49637");
const base = ref(49637);
const total = computed(() => base.value * 2);

function incrementar49637() {
  base.value++;
}
</script>
