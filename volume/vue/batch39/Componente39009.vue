<template>
  <section class="panel-39009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39009");
const base = ref(39009);
const total = computed(() => base.value * 2);

function incrementar39009() {
  base.value++;
}
</script>
