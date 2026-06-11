<template>
  <section class="panel-49589">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49589");
const base = ref(49589);
const total = computed(() => base.value * 2);

function incrementar49589() {
  base.value++;
}
</script>
