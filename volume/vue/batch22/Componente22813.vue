<template>
  <section class="panel-22813">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22813");
const base = ref(22813);
const total = computed(() => base.value * 2);

function incrementar22813() {
  base.value++;
}
</script>
