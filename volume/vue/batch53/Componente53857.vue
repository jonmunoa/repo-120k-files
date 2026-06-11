<template>
  <section class="panel-53857">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53857");
const base = ref(53857);
const total = computed(() => base.value * 2);

function incrementar53857() {
  base.value++;
}
</script>
