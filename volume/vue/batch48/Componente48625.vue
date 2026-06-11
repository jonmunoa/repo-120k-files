<template>
  <section class="panel-48625">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48625");
const base = ref(48625);
const total = computed(() => base.value * 2);

function incrementar48625() {
  base.value++;
}
</script>
