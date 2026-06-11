<template>
  <section class="panel-33661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33661");
const base = ref(33661);
const total = computed(() => base.value * 2);

function incrementar33661() {
  base.value++;
}
</script>
