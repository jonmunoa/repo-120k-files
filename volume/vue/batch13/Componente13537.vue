<template>
  <section class="panel-13537">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13537");
const base = ref(13537);
const total = computed(() => base.value * 2);

function incrementar13537() {
  base.value++;
}
</script>
