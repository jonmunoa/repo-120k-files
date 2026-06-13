// fichero 52718 -- macros y constantes
#define LIMITE_52718 52818
#define FACTOR_52718 4

int aplicar_limite52718(int valor) {
    if (valor > LIMITE_52718) return LIMITE_52718;
    return valor * FACTOR_52718;
}
