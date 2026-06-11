<template>
  <section class="panel-35045">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35045");
const base = ref(35045);
const total = computed(() => base.value * 2);

function incrementar35045() {
  base.value++;
}
</script>
