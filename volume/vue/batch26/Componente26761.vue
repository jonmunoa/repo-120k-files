<template>
  <section class="panel-26761">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26761");
const base = ref(26761);
const total = computed(() => base.value * 2);

function incrementar26761() {
  base.value++;
}
</script>
