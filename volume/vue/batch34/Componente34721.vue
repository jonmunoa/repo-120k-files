<template>
  <section class="panel-34721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34721");
const base = ref(34721);
const total = computed(() => base.value * 2);

function incrementar34721() {
  base.value++;
}
</script>
