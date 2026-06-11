<template>
  <section class="panel-18653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18653");
const base = ref(18653);
const total = computed(() => base.value * 2);

function incrementar18653() {
  base.value++;
}
</script>
