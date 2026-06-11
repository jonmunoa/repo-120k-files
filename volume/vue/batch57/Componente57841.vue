<template>
  <section class="panel-57841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57841");
const base = ref(57841);
const total = computed(() => base.value * 2);

function incrementar57841() {
  base.value++;
}
</script>
