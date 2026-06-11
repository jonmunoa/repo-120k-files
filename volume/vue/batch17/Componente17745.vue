<template>
  <section class="panel-17745">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17745");
const base = ref(17745);
const total = computed(() => base.value * 2);

function incrementar17745() {
  base.value++;
}
</script>
