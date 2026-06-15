// fichero 25330 -- macros y constantes -- MODIFICADO
#define LIMITE_25330 25530
#define FACTOR_25330 2

int aplicar_limite25330(int valor) {
    if (valor > LIMITE_25330) return LIMITE_25330;
    return valor * FACTOR_25330;
}
