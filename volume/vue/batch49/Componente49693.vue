<template>
  <section class="panel-49693">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49693");
const base = ref(49693);
const total = computed(() => base.value * 2);

function incrementar49693() {
  base.value++;
}
</script>
