<template>
  <section class="panel-21477">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21477");
const base = ref(21477);
const total = computed(() => base.value * 2);

function incrementar21477() {
  base.value++;
}
</script>
