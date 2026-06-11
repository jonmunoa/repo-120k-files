<template>
  <section class="panel-31637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31637");
const base = ref(31637);
const total = computed(() => base.value * 2);

function incrementar31637() {
  base.value++;
}
</script>
