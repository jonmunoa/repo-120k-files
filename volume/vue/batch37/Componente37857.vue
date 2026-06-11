<template>
  <section class="panel-37857">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37857");
const base = ref(37857);
const total = computed(() => base.value * 2);

function incrementar37857() {
  base.value++;
}
</script>
