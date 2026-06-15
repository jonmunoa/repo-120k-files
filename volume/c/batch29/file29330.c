// fichero 29330 -- macros y constantes -- MODIFICADO
#define LIMITE_29330 29530
#define FACTOR_29330 2

int aplicar_limite29330(int valor) {
    if (valor > LIMITE_29330) return LIMITE_29330;
    return valor * FACTOR_29330;
}
