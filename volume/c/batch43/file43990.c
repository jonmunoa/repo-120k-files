// fichero 43990 -- macros y constantes -- MODIFICADO
#define LIMITE_43990 44190
#define FACTOR_43990 2

int aplicar_limite43990(int valor) {
    if (valor > LIMITE_43990) return LIMITE_43990;
    return valor * FACTOR_43990;
}
