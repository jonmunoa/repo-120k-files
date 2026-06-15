// fichero 19358 -- macros y constantes -- MODIFICADO
#define LIMITE_19358 19558
#define FACTOR_19358 5

int aplicar_limite19358(int valor) {
    if (valor > LIMITE_19358) return LIMITE_19358;
    return valor * FACTOR_19358;
}
