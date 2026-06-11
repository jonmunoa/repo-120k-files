<template>
  <section class="panel-53961">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53961");
const base = ref(53961);
const total = computed(() => base.value * 2);

function incrementar53961() {
  base.value++;
}
</script>
