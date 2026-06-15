// fichero 16330 -- macros y constantes -- MODIFICADO
#define LIMITE_16330 16530
#define FACTOR_16330 2

int aplicar_limite16330(int valor) {
    if (valor > LIMITE_16330) return LIMITE_16330;
    return valor * FACTOR_16330;
}
