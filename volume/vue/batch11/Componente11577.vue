<template>
  <section class="panel-11577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11577");
const base = ref(11577);
const total = computed(() => base.value * 2);

function incrementar11577() {
  base.value++;
}
</script>
