<template>
  <section class="panel-49577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49577");
const base = ref(49577);
const total = computed(() => base.value * 2);

function incrementar49577() {
  base.value++;
}
</script>
