// fichero 25358 -- macros y constantes -- MODIFICADO
#define LIMITE_25358 25558
#define FACTOR_25358 5

int aplicar_limite25358(int valor) {
    if (valor > LIMITE_25358) return LIMITE_25358;
    return valor * FACTOR_25358;
}
