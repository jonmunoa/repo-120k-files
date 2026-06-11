<template>
  <section class="panel-14033">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14033");
const base = ref(14033);
const total = computed(() => base.value * 2);

function incrementar14033() {
  base.value++;
}
</script>
