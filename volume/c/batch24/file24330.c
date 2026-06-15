// fichero 24330 -- macros y constantes -- MODIFICADO
#define LIMITE_24330 24530
#define FACTOR_24330 2

int aplicar_limite24330(int valor) {
    if (valor > LIMITE_24330) return LIMITE_24330;
    return valor * FACTOR_24330;
}
