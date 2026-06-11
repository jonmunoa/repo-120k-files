<template>
  <section class="panel-12253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12253");
const base = ref(12253);
const total = computed(() => base.value * 2);

function incrementar12253() {
  base.value++;
}
</script>
