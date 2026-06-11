<template>
  <section class="panel-17561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17561");
const base = ref(17561);
const total = computed(() => base.value * 2);

function incrementar17561() {
  base.value++;
}
</script>
