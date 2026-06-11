<template>
  <section class="panel-21653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21653");
const base = ref(21653);
const total = computed(() => base.value * 2);

function incrementar21653() {
  base.value++;
}
</script>
