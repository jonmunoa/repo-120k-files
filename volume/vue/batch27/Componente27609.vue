<template>
  <section class="panel-27609">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27609");
const base = ref(27609);
const total = computed(() => base.value * 2);

function incrementar27609() {
  base.value++;
}
</script>
