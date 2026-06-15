// fichero 5646 -- macros y constantes -- MODIFICADO
#define LIMITE_5646 5846
#define FACTOR_5646 3

int aplicar_limite5646(int valor) {
    if (valor > LIMITE_5646) return LIMITE_5646;
    return valor * FACTOR_5646;
}
