<template>
  <section class="panel-57253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57253");
const base = ref(57253);
const total = computed(() => base.value * 2);

function incrementar57253() {
  base.value++;
}
</script>
