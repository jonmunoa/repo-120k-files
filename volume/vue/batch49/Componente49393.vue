<template>
  <section class="panel-49393">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49393");
const base = ref(49393);
const total = computed(() => base.value * 2);

function incrementar49393() {
  base.value++;
}
</script>
