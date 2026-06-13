// fichero 44170 -- macros y constantes
#define LIMITE_44170 44270
#define FACTOR_44170 1

int aplicar_limite44170(int valor) {
    if (valor > LIMITE_44170) return LIMITE_44170;
    return valor * FACTOR_44170;
}
