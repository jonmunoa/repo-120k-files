<template>
  <section class="panel-11913">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11913");
const base = ref(11913);
const total = computed(() => base.value * 2);

function incrementar11913() {
  base.value++;
}
</script>
