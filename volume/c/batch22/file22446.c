// fichero 22446 -- macros y constantes -- MODIFICADO
#define LIMITE_22446 22646
#define FACTOR_22446 3

int aplicar_limite22446(int valor) {
    if (valor > LIMITE_22446) return LIMITE_22446;
    return valor * FACTOR_22446;
}
