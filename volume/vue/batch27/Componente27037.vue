<template>
  <section class="panel-27037">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27037");
const base = ref(27037);
const total = computed(() => base.value * 2);

function incrementar27037() {
  base.value++;
}
</script>
