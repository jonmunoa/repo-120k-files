<template>
  <section class="panel-37377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37377");
const base = ref(37377);
const total = computed(() => base.value * 2);

function incrementar37377() {
  base.value++;
}
</script>
