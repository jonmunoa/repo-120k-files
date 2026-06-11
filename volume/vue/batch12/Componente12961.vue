<template>
  <section class="panel-12961">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12961");
const base = ref(12961);
const total = computed(() => base.value * 2);

function incrementar12961() {
  base.value++;
}
</script>
