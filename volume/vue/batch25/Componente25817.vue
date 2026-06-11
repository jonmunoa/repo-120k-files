<template>
  <section class="panel-25817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25817");
const base = ref(25817);
const total = computed(() => base.value * 2);

function incrementar25817() {
  base.value++;
}
</script>
