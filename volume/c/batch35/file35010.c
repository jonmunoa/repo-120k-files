// fichero 35010 -- macros y constantes
#define LIMITE_35010 35110
#define FACTOR_35010 1

int aplicar_limite35010(int valor) {
    if (valor > LIMITE_35010) return LIMITE_35010;
    return valor * FACTOR_35010;
}
