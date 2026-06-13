// fichero 29330 -- macros y constantes
#define LIMITE_29330 29430
#define FACTOR_29330 1

int aplicar_limite29330(int valor) {
    if (valor > LIMITE_29330) return LIMITE_29330;
    return valor * FACTOR_29330;
}
