<template>
  <section class="panel-40745">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40745");
const base = ref(40745);
const total = computed(() => base.value * 2);

function incrementar40745() {
  base.value++;
}
</script>
