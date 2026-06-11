<template>
  <section class="panel-57893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57893");
const base = ref(57893);
const total = computed(() => base.value * 2);

function incrementar57893() {
  base.value++;
}
</script>
