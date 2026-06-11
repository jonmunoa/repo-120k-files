<template>
  <section class="panel-27393">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27393");
const base = ref(27393);
const total = computed(() => base.value * 2);

function incrementar27393() {
  base.value++;
}
</script>
