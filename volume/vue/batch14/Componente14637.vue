<template>
  <section class="panel-14637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14637");
const base = ref(14637);
const total = computed(() => base.value * 2);

function incrementar14637() {
  base.value++;
}
</script>
