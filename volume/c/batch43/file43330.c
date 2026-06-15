// fichero 43330 -- macros y constantes -- MODIFICADO
#define LIMITE_43330 43530
#define FACTOR_43330 2

int aplicar_limite43330(int valor) {
    if (valor > LIMITE_43330) return LIMITE_43330;
    return valor * FACTOR_43330;
}
