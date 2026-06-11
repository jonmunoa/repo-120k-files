<template>
  <section class="panel-14953">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14953");
const base = ref(14953);
const total = computed(() => base.value * 2);

function incrementar14953() {
  base.value++;
}
</script>
