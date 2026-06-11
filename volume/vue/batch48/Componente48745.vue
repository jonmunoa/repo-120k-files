<template>
  <section class="panel-48745">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48745");
const base = ref(48745);
const total = computed(() => base.value * 2);

function incrementar48745() {
  base.value++;
}
</script>
