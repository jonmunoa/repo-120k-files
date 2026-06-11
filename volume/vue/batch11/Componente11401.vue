<template>
  <section class="panel-11401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11401");
const base = ref(11401);
const total = computed(() => base.value * 2);

function incrementar11401() {
  base.value++;
}
</script>
