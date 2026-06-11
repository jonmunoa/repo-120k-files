<template>
  <section class="panel-57373">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57373");
const base = ref(57373);
const total = computed(() => base.value * 2);

function incrementar57373() {
  base.value++;
}
</script>
