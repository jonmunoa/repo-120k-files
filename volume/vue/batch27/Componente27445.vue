<template>
  <section class="panel-27445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27445");
const base = ref(27445);
const total = computed(() => base.value * 2);

function incrementar27445() {
  base.value++;
}
</script>
