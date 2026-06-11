<template>
  <section class="panel-57125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57125");
const base = ref(57125);
const total = computed(() => base.value * 2);

function incrementar57125() {
  base.value++;
}
</script>
