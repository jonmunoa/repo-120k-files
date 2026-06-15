// fichero 43082 -- macros y constantes -- MODIFICADO
#define LIMITE_43082 43282
#define FACTOR_43082 4

int aplicar_limite43082(int valor) {
    if (valor > LIMITE_43082) return LIMITE_43082;
    return valor * FACTOR_43082;
}
