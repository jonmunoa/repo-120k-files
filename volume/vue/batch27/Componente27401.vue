<template>
  <section class="panel-27401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27401");
const base = ref(27401);
const total = computed(() => base.value * 2);

function incrementar27401() {
  base.value++;
}
</script>
