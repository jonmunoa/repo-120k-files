<template>
  <section class="panel-11173">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11173");
const base = ref(11173);
const total = computed(() => base.value * 2);

function incrementar11173() {
  base.value++;
}
</script>
