<template>
  <section class="panel-19377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19377");
const base = ref(19377);
const total = computed(() => base.value * 2);

function incrementar19377() {
  base.value++;
}
</script>
