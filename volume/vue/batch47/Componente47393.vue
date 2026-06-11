<template>
  <section class="panel-47393">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47393");
const base = ref(47393);
const total = computed(() => base.value * 2);

function incrementar47393() {
  base.value++;
}
</script>
