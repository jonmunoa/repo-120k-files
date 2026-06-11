<template>
  <section class="panel-52661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52661");
const base = ref(52661);
const total = computed(() => base.value * 2);

function incrementar52661() {
  base.value++;
}
</script>
