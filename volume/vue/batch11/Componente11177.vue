<template>
  <section class="panel-11177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11177");
const base = ref(11177);
const total = computed(() => base.value * 2);

function incrementar11177() {
  base.value++;
}
</script>
