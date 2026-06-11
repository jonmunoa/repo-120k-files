<template>
  <section class="panel-7765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7765");
const base = ref(7765);
const total = computed(() => base.value * 2);

function incrementar7765() {
  base.value++;
}
</script>
