<template>
  <section class="panel-34537">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34537");
const base = ref(34537);
const total = computed(() => base.value * 2);

function incrementar34537() {
  base.value++;
}
</script>
