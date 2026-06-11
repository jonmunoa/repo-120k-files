<template>
  <section class="panel-17661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17661");
const base = ref(17661);
const total = computed(() => base.value * 2);

function incrementar17661() {
  base.value++;
}
</script>
