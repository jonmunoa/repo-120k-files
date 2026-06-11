<template>
  <section class="panel-55745">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55745");
const base = ref(55745);
const total = computed(() => base.value * 2);

function incrementar55745() {
  base.value++;
}
</script>
