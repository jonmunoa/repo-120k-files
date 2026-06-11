<template>
  <section class="panel-33637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33637");
const base = ref(33637);
const total = computed(() => base.value * 2);

function incrementar33637() {
  base.value++;
}
</script>
