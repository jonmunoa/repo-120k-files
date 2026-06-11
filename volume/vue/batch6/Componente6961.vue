<template>
  <section class="panel-6961">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6961");
const base = ref(6961);
const total = computed(() => base.value * 2);

function incrementar6961() {
  base.value++;
}
</script>
