<template>
  <section class="panel-15961">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15961");
const base = ref(15961);
const total = computed(() => base.value * 2);

function incrementar15961() {
  base.value++;
}
</script>
