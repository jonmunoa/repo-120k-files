<template>
  <section class="panel-47573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47573");
const base = ref(47573);
const total = computed(() => base.value * 2);

function incrementar47573() {
  base.value++;
}
</script>
