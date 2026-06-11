<template>
  <section class="panel-20589">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20589");
const base = ref(20589);
const total = computed(() => base.value * 2);

function incrementar20589() {
  base.value++;
}
</script>
