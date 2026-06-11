<template>
  <section class="panel-33697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33697");
const base = ref(33697);
const total = computed(() => base.value * 2);

function incrementar33697() {
  base.value++;
}
</script>
