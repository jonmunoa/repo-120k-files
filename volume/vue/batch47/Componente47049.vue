<template>
  <section class="panel-47049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47049");
const base = ref(47049);
const total = computed(() => base.value * 2);

function incrementar47049() {
  base.value++;
}
</script>
