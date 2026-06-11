<template>
  <section class="panel-8577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8577");
const base = ref(8577);
const total = computed(() => base.value * 2);

function incrementar8577() {
  base.value++;
}
</script>
