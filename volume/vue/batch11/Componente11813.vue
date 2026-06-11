<template>
  <section class="panel-11813">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11813");
const base = ref(11813);
const total = computed(() => base.value * 2);

function incrementar11813() {
  base.value++;
}
</script>
