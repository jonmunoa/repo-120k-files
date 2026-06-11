<template>
  <section class="panel-45609">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45609");
const base = ref(45609);
const total = computed(() => base.value * 2);

function incrementar45609() {
  base.value++;
}
</script>
