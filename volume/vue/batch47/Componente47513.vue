<template>
  <section class="panel-47513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47513");
const base = ref(47513);
const total = computed(() => base.value * 2);

function incrementar47513() {
  base.value++;
}
</script>
