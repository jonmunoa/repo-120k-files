<template>
  <section class="panel-47653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47653");
const base = ref(47653);
const total = computed(() => base.value * 2);

function incrementar47653() {
  base.value++;
}
</script>
