// fichero 43290 -- macros y constantes -- MODIFICADO
#define LIMITE_43290 43490
#define FACTOR_43290 2

int aplicar_limite43290(int valor) {
    if (valor > LIMITE_43290) return LIMITE_43290;
    return valor * FACTOR_43290;
}
