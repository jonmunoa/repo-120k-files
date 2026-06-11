<template>
  <section class="panel-13997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13997");
const base = ref(13997);
const total = computed(() => base.value * 2);

function incrementar13997() {
  base.value++;
}
</script>
