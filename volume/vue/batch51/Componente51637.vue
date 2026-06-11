<template>
  <section class="panel-51637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51637");
const base = ref(51637);
const total = computed(() => base.value * 2);

function incrementar51637() {
  base.value++;
}
</script>
