// fichero 37266 -- macros y constantes -- MODIFICADO
#define LIMITE_37266 37466
#define FACTOR_37266 3

int aplicar_limite37266(int valor) {
    if (valor > LIMITE_37266) return LIMITE_37266;
    return valor * FACTOR_37266;
}
