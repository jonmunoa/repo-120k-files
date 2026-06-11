<template>
  <section class="panel-39857">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39857");
const base = ref(39857);
const total = computed(() => base.value * 2);

function incrementar39857() {
  base.value++;
}
</script>
