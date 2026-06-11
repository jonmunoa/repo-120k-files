<template>
  <section class="panel-26757">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26757");
const base = ref(26757);
const total = computed(() => base.value * 2);

function incrementar26757() {
  base.value++;
}
</script>
