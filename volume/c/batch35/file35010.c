// fichero 35010 -- macros y constantes -- MODIFICADO
#define LIMITE_35010 35210
#define FACTOR_35010 2

int aplicar_limite35010(int valor) {
    if (valor > LIMITE_35010) return LIMITE_35010;
    return valor * FACTOR_35010;
}
