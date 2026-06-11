<template>
  <section class="panel-48637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48637");
const base = ref(48637);
const total = computed(() => base.value * 2);

function incrementar48637() {
  base.value++;
}
</script>
