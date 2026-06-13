// fichero 43330 -- macros y constantes
#define LIMITE_43330 43430
#define FACTOR_43330 1

int aplicar_limite43330(int valor) {
    if (valor > LIMITE_43330) return LIMITE_43330;
    return valor * FACTOR_43330;
}
