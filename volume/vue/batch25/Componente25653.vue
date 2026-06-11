<template>
  <section class="panel-25653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25653");
const base = ref(25653);
const total = computed(() => base.value * 2);

function incrementar25653() {
  base.value++;
}
</script>
