// fichero 25230 -- macros y constantes -- MODIFICADO
#define LIMITE_25230 25430
#define FACTOR_25230 2

int aplicar_limite25230(int valor) {
    if (valor > LIMITE_25230) return LIMITE_25230;
    return valor * FACTOR_25230;
}
