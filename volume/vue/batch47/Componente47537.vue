<template>
  <section class="panel-47537">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47537");
const base = ref(47537);
const total = computed(() => base.value * 2);

function incrementar47537() {
  base.value++;
}
</script>
