<template>
  <section class="panel-39589">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39589");
const base = ref(39589);
const total = computed(() => base.value * 2);

function incrementar39589() {
  base.value++;
}
</script>
