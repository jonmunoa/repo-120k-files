<template>
  <section class="panel-33589">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33589");
const base = ref(33589);
const total = computed(() => base.value * 2);

function incrementar33589() {
  base.value++;
}
</script>
