<template>
  <section class="panel-4609">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4609");
const base = ref(4609);
const total = computed(() => base.value * 2);

function incrementar4609() {
  base.value++;
}
</script>
