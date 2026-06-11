<template>
  <section class="panel-55765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55765");
const base = ref(55765);
const total = computed(() => base.value * 2);

function incrementar55765() {
  base.value++;
}
</script>
