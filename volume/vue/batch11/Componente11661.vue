<template>
  <section class="panel-11661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11661");
const base = ref(11661);
const total = computed(() => base.value * 2);

function incrementar11661() {
  base.value++;
}
</script>
