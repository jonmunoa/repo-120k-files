<template>
  <section class="panel-9661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9661");
const base = ref(9661);
const total = computed(() => base.value * 2);

function incrementar9661() {
  base.value++;
}
</script>
