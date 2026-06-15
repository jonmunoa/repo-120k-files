// fichero 18330 -- macros y constantes -- MODIFICADO
#define LIMITE_18330 18530
#define FACTOR_18330 2

int aplicar_limite18330(int valor) {
    if (valor > LIMITE_18330) return LIMITE_18330;
    return valor * FACTOR_18330;
}
