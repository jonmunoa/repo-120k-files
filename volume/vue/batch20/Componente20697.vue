<template>
  <section class="panel-20697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20697");
const base = ref(20697);
const total = computed(() => base.value * 2);

function incrementar20697() {
  base.value++;
}
</script>
