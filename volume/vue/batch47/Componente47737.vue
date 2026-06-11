<template>
  <section class="panel-47737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47737");
const base = ref(47737);
const total = computed(() => base.value * 2);

function incrementar47737() {
  base.value++;
}
</script>
