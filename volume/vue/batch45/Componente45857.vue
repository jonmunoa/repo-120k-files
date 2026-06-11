<template>
  <section class="panel-45857">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45857");
const base = ref(45857);
const total = computed(() => base.value * 2);

function incrementar45857() {
  base.value++;
}
</script>
