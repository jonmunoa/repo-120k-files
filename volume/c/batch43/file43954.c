// fichero 43954 -- macros y constantes -- MODIFICADO
#define LIMITE_43954 44154
#define FACTOR_43954 6

int aplicar_limite43954(int valor) {
    if (valor > LIMITE_43954) return LIMITE_43954;
    return valor * FACTOR_43954;
}
