<template>
  <section class="panel-18477">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18477");
const base = ref(18477);
const total = computed(() => base.value * 2);

function incrementar18477() {
  base.value++;
}
</script>
