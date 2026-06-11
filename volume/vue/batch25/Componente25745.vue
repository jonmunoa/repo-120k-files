<template>
  <section class="panel-25745">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25745");
const base = ref(25745);
const total = computed(() => base.value * 2);

function incrementar25745() {
  base.value++;
}
</script>
