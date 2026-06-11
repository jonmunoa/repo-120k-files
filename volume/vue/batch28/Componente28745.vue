<template>
  <section class="panel-28745">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28745");
const base = ref(28745);
const total = computed(() => base.value * 2);

function incrementar28745() {
  base.value++;
}
</script>
