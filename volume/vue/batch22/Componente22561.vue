<template>
  <section class="panel-22561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22561");
const base = ref(22561);
const total = computed(() => base.value * 2);

function incrementar22561() {
  base.value++;
}
</script>
