<template>
  <section class="panel-12493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12493");
const base = ref(12493);
const total = computed(() => base.value * 2);

function incrementar12493() {
  base.value++;
}
</script>
