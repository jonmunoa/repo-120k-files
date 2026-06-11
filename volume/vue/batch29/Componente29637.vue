<template>
  <section class="panel-29637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29637");
const base = ref(29637);
const total = computed(() => base.value * 2);

function incrementar29637() {
  base.value++;
}
</script>
