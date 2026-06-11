<template>
  <section class="panel-57357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57357");
const base = ref(57357);
const total = computed(() => base.value * 2);

function incrementar57357() {
  base.value++;
}
</script>
