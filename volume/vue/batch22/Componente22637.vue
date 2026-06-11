<template>
  <section class="panel-22637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22637");
const base = ref(22637);
const total = computed(() => base.value * 2);

function incrementar22637() {
  base.value++;
}
</script>
