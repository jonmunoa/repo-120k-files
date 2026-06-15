// fichero 48342 -- macros y constantes -- MODIFICADO
#define LIMITE_48342 48542
#define FACTOR_48342 4

int aplicar_limite48342(int valor) {
    if (valor > LIMITE_48342) return LIMITE_48342;
    return valor * FACTOR_48342;
}
