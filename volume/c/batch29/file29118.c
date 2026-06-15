// fichero 29118 -- macros y constantes -- MODIFICADO
#define LIMITE_29118 29318
#define FACTOR_29118 5

int aplicar_limite29118(int valor) {
    if (valor > LIMITE_29118) return LIMITE_29118;
    return valor * FACTOR_29118;
}
