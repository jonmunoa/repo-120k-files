<template>
  <section class="panel-8745">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8745");
const base = ref(8745);
const total = computed(() => base.value * 2);

function incrementar8745() {
  base.value++;
}
</script>
