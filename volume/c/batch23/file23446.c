// fichero 23446 -- macros y constantes -- MODIFICADO
#define LIMITE_23446 23646
#define FACTOR_23446 3

int aplicar_limite23446(int valor) {
    if (valor > LIMITE_23446) return LIMITE_23446;
    return valor * FACTOR_23446;
}
