// fichero 31446 -- macros y constantes -- MODIFICADO
#define LIMITE_31446 31646
#define FACTOR_31446 3

int aplicar_limite31446(int valor) {
    if (valor > LIMITE_31446) return LIMITE_31446;
    return valor * FACTOR_31446;
}
