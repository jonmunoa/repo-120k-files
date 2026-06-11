<template>
  <section class="panel-11449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11449");
const base = ref(11449);
const total = computed(() => base.value * 2);

function incrementar11449() {
  base.value++;
}
</script>
