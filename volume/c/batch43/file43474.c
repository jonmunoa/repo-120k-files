// fichero 43474 -- macros y constantes -- MODIFICADO
#define LIMITE_43474 43674
#define FACTOR_43474 6

int aplicar_limite43474(int valor) {
    if (valor > LIMITE_43474) return LIMITE_43474;
    return valor * FACTOR_43474;
}
