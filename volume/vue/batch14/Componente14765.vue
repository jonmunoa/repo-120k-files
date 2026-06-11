<template>
  <section class="panel-14765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14765");
const base = ref(14765);
const total = computed(() => base.value * 2);

function incrementar14765() {
  base.value++;
}
</script>
