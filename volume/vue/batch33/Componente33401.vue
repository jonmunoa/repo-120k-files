<template>
  <section class="panel-33401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33401");
const base = ref(33401);
const total = computed(() => base.value * 2);

function incrementar33401() {
  base.value++;
}
</script>
