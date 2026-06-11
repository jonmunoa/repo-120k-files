<template>
  <section class="panel-2589">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2589");
const base = ref(2589);
const total = computed(() => base.value * 2);

function incrementar2589() {
  base.value++;
}
</script>
