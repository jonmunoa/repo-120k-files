<template>
  <section class="panel-8661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8661");
const base = ref(8661);
const total = computed(() => base.value * 2);

function incrementar8661() {
  base.value++;
}
</script>
