<template>
  <section class="panel-17961">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17961");
const base = ref(17961);
const total = computed(() => base.value * 2);

function incrementar17961() {
  base.value++;
}
</script>
