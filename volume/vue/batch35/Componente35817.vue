<template>
  <section class="panel-35817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35817");
const base = ref(35817);
const total = computed(() => base.value * 2);

function incrementar35817() {
  base.value++;
}
</script>
