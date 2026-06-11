<template>
  <section class="panel-27745">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27745");
const base = ref(27745);
const total = computed(() => base.value * 2);

function incrementar27745() {
  base.value++;
}
</script>
