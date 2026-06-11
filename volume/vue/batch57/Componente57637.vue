<template>
  <section class="panel-57637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57637");
const base = ref(57637);
const total = computed(() => base.value * 2);

function incrementar57637() {
  base.value++;
}
</script>
