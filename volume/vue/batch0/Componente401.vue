<template>
  <section class="panel-401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 401");
const base = ref(401);
const total = computed(() => base.value * 2);

function incrementar401() {
  base.value++;
}
</script>
