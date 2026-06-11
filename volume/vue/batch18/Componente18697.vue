<template>
  <section class="panel-18697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18697");
const base = ref(18697);
const total = computed(() => base.value * 2);

function incrementar18697() {
  base.value++;
}
</script>
