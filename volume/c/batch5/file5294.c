// fichero 5294 -- macros y constantes -- MODIFICADO
#define LIMITE_5294 5494
#define FACTOR_5294 6

int aplicar_limite5294(int valor) {
    if (valor > LIMITE_5294) return LIMITE_5294;
    return valor * FACTOR_5294;
}
