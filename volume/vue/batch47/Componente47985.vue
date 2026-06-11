<template>
  <section class="panel-47985">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47985");
const base = ref(47985);
const total = computed(() => base.value * 2);

function incrementar47985() {
  base.value++;
}
</script>
