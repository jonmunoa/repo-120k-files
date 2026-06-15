// fichero 6446 -- macros y constantes -- MODIFICADO
#define LIMITE_6446 6646
#define FACTOR_6446 3

int aplicar_limite6446(int valor) {
    if (valor > LIMITE_6446) return LIMITE_6446;
    return valor * FACTOR_6446;
}
