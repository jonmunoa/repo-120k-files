// fichero 17218 -- macros y constantes -- MODIFICADO
#define LIMITE_17218 17418
#define FACTOR_17218 5

int aplicar_limite17218(int valor) {
    if (valor > LIMITE_17218) return LIMITE_17218;
    return valor * FACTOR_17218;
}
