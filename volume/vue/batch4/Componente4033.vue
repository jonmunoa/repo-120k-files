<template>
  <section class="panel-4033">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4033");
const base = ref(4033);
const total = computed(() => base.value * 2);

function incrementar4033() {
  base.value++;
}
</script>
