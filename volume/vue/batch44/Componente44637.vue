<template>
  <section class="panel-44637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44637");
const base = ref(44637);
const total = computed(() => base.value * 2);

function incrementar44637() {
  base.value++;
}
</script>
