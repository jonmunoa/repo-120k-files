<template>
  <section class="panel-49477">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49477");
const base = ref(49477);
const total = computed(() => base.value * 2);

function incrementar49477() {
  base.value++;
}
</script>
