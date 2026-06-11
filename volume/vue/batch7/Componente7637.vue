<template>
  <section class="panel-7637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7637");
const base = ref(7637);
const total = computed(() => base.value * 2);

function incrementar7637() {
  base.value++;
}
</script>
