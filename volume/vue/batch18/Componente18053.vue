<template>
  <section class="panel-18053">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18053");
const base = ref(18053);
const total = computed(() => base.value * 2);

function incrementar18053() {
  base.value++;
}
</script>
