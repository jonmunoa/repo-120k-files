<template>
  <section class="panel-27357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27357");
const base = ref(27357);
const total = computed(() => base.value * 2);

function incrementar27357() {
  base.value++;
}
</script>
