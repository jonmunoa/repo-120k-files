<template>
  <section class="panel-637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 637");
const base = ref(637);
const total = computed(() => base.value * 2);

function incrementar637() {
  base.value++;
}
</script>
