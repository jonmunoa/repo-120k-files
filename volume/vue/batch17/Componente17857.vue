<template>
  <section class="panel-17857">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17857");
const base = ref(17857);
const total = computed(() => base.value * 2);

function incrementar17857() {
  base.value++;
}
</script>
