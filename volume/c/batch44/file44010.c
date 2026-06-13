// fichero 44010 -- macros y constantes
#define LIMITE_44010 44110
#define FACTOR_44010 1

int aplicar_limite44010(int valor) {
    if (valor > LIMITE_44010) return LIMITE_44010;
    return valor * FACTOR_44010;
}
