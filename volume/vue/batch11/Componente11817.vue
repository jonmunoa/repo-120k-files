<template>
  <section class="panel-11817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11817");
const base = ref(11817);
const total = computed(() => base.value * 2);

function incrementar11817() {
  base.value++;
}
</script>
