<template>
  <section class="panel-13933">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13933");
const base = ref(13933);
const total = computed(() => base.value * 2);

function incrementar13933() {
  base.value++;
}
</script>
