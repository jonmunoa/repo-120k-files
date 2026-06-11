<template>
  <section class="panel-55997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55997");
const base = ref(55997);
const total = computed(() => base.value * 2);

function incrementar55997() {
  base.value++;
}
</script>
