<template>
  <section class="panel-18377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18377");
const base = ref(18377);
const total = computed(() => base.value * 2);

function incrementar18377() {
  base.value++;
}
</script>
