<template>
  <section class="panel-47485">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47485");
const base = ref(47485);
const total = computed(() => base.value * 2);

function incrementar47485() {
  base.value++;
}
</script>
