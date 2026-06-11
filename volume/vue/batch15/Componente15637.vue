<template>
  <section class="panel-15637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15637");
const base = ref(15637);
const total = computed(() => base.value * 2);

function incrementar15637() {
  base.value++;
}
</script>
