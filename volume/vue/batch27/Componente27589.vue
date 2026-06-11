<template>
  <section class="panel-27589">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27589");
const base = ref(27589);
const total = computed(() => base.value * 2);

function incrementar27589() {
  base.value++;
}
</script>
