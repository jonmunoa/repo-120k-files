<template>
  <section class="panel-47329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47329");
const base = ref(47329);
const total = computed(() => base.value * 2);

function incrementar47329() {
  base.value++;
}
</script>
