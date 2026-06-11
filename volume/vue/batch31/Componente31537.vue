<template>
  <section class="panel-31537">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31537");
const base = ref(31537);
const total = computed(() => base.value * 2);

function incrementar31537() {
  base.value++;
}
</script>
