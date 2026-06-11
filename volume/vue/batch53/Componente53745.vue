<template>
  <section class="panel-53745">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53745");
const base = ref(53745);
const total = computed(() => base.value * 2);

function incrementar53745() {
  base.value++;
}
</script>
