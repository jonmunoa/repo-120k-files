<template>
  <section class="panel-12857">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12857");
const base = ref(12857);
const total = computed(() => base.value * 2);

function incrementar12857() {
  base.value++;
}
</script>
