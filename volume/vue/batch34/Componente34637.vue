<template>
  <section class="panel-34637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34637");
const base = ref(34637);
const total = computed(() => base.value * 2);

function incrementar34637() {
  base.value++;
}
</script>
