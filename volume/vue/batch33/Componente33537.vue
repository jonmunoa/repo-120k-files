<template>
  <section class="panel-33537">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33537");
const base = ref(33537);
const total = computed(() => base.value * 2);

function incrementar33537() {
  base.value++;
}
</script>
