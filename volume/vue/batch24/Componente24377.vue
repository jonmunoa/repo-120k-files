<template>
  <section class="panel-24377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24377");
const base = ref(24377);
const total = computed(() => base.value * 2);

function incrementar24377() {
  base.value++;
}
</script>
