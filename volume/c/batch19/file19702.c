// fichero 19702 -- macros y constantes -- MODIFICADO
#define LIMITE_19702 19902
#define FACTOR_19702 4

int aplicar_limite19702(int valor) {
    if (valor > LIMITE_19702) return LIMITE_19702;
    return valor * FACTOR_19702;
}
