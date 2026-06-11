<template>
  <section class="panel-20609">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20609");
const base = ref(20609);
const total = computed(() => base.value * 2);

function incrementar20609() {
  base.value++;
}
</script>
