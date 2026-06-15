// fichero 330 -- macros y constantes -- MODIFICADO
#define LIMITE_330 530
#define FACTOR_330 2

int aplicar_limite330(int valor) {
    if (valor > LIMITE_330) return LIMITE_330;
    return valor * FACTOR_330;
}
