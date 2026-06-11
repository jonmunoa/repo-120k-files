<template>
  <section class="panel-11245">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11245");
const base = ref(11245);
const total = computed(() => base.value * 2);

function incrementar11245() {
  base.value++;
}
</script>
