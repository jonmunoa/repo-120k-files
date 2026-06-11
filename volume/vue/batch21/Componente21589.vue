<template>
  <section class="panel-21589">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21589");
const base = ref(21589);
const total = computed(() => base.value * 2);

function incrementar21589() {
  base.value++;
}
</script>
