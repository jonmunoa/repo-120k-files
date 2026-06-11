<template>
  <section class="panel-27849">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27849");
const base = ref(27849);
const total = computed(() => base.value * 2);

function incrementar27849() {
  base.value++;
}
</script>
