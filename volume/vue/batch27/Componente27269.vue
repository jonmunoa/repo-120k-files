<template>
  <section class="panel-27269">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27269");
const base = ref(27269);
const total = computed(() => base.value * 2);

function incrementar27269() {
  base.value++;
}
</script>
