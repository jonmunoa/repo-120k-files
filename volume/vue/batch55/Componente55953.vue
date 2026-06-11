<template>
  <section class="panel-55953">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55953");
const base = ref(55953);
const total = computed(() => base.value * 2);

function incrementar55953() {
  base.value++;
}
</script>
