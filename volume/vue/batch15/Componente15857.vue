<template>
  <section class="panel-15857">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15857");
const base = ref(15857);
const total = computed(() => base.value * 2);

function incrementar15857() {
  base.value++;
}
</script>
