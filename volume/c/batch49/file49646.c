// fichero 49646 -- macros y constantes
#define LIMITE_49646 49746
#define FACTOR_49646 2

int aplicar_limite49646(int valor) {
    if (valor > LIMITE_49646) return LIMITE_49646;
    return valor * FACTOR_49646;
}
