<template>
  <section class="panel-8609">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8609");
const base = ref(8609);
const total = computed(() => base.value * 2);

function incrementar8609() {
  base.value++;
}
</script>
