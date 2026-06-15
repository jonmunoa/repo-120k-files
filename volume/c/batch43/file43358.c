// fichero 43358 -- macros y constantes -- MODIFICADO
#define LIMITE_43358 43558
#define FACTOR_43358 5

int aplicar_limite43358(int valor) {
    if (valor > LIMITE_43358) return LIMITE_43358;
    return valor * FACTOR_43358;
}
