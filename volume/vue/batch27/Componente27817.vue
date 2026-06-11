<template>
  <section class="panel-27817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27817");
const base = ref(27817);
const total = computed(() => base.value * 2);

function incrementar27817() {
  base.value++;
}
</script>
