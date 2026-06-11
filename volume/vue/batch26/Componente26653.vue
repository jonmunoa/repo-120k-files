<template>
  <section class="panel-26653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26653");
const base = ref(26653);
const total = computed(() => base.value * 2);

function incrementar26653() {
  base.value++;
}
</script>
