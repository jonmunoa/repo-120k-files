<template>
  <section class="panel-53377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53377");
const base = ref(53377);
const total = computed(() => base.value * 2);

function incrementar53377() {
  base.value++;
}
</script>
