<template>
  <section class="panel-35661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35661");
const base = ref(35661);
const total = computed(() => base.value * 2);

function incrementar35661() {
  base.value++;
}
</script>
