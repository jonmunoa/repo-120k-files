<template>
  <section class="panel-13637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13637");
const base = ref(13637);
const total = computed(() => base.value * 2);

function incrementar13637() {
  base.value++;
}
</script>
