<template>
  <section class="panel-13609">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13609");
const base = ref(13609);
const total = computed(() => base.value * 2);

function incrementar13609() {
  base.value++;
}
</script>
