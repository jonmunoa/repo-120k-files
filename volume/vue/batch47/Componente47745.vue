<template>
  <section class="panel-47745">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47745");
const base = ref(47745);
const total = computed(() => base.value * 2);

function incrementar47745() {
  base.value++;
}
</script>
