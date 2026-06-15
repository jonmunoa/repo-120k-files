// fichero 19330 -- macros y constantes -- MODIFICADO
#define LIMITE_19330 19530
#define FACTOR_19330 2

int aplicar_limite19330(int valor) {
    if (valor > LIMITE_19330) return LIMITE_19330;
    return valor * FACTOR_19330;
}
