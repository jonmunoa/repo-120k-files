// fichero 46446 -- macros y constantes -- MODIFICADO
#define LIMITE_46446 46646
#define FACTOR_46446 3

int aplicar_limite46446(int valor) {
    if (valor > LIMITE_46446) return LIMITE_46446;
    return valor * FACTOR_46446;
}
