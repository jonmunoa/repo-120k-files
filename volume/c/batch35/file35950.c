// fichero 35950 -- macros y constantes -- MODIFICADO
#define LIMITE_35950 36150
#define FACTOR_35950 2

int aplicar_limite35950(int valor) {
    if (valor > LIMITE_35950) return LIMITE_35950;
    return valor * FACTOR_35950;
}
