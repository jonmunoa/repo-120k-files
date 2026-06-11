<template>
  <section class="panel-18637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18637");
const base = ref(18637);
const total = computed(() => base.value * 2);

function incrementar18637() {
  base.value++;
}
</script>
