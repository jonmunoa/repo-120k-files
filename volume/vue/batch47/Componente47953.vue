<template>
  <section class="panel-47953">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47953");
const base = ref(47953);
const total = computed(() => base.value * 2);

function incrementar47953() {
  base.value++;
}
</script>
