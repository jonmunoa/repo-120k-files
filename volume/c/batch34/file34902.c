// fichero 34902 -- macros y constantes -- MODIFICADO
#define LIMITE_34902 35102
#define FACTOR_34902 4

int aplicar_limite34902(int valor) {
    if (valor > LIMITE_34902) return LIMITE_34902;
    return valor * FACTOR_34902;
}
