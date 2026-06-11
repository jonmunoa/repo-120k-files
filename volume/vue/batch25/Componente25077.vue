<template>
  <section class="panel-25077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25077");
const base = ref(25077);
const total = computed(() => base.value * 2);

function incrementar25077() {
  base.value++;
}
</script>
