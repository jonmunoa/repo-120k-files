// fichero 13010 -- macros y constantes -- MODIFICADO
#define LIMITE_13010 13210
#define FACTOR_13010 2

int aplicar_limite13010(int valor) {
    if (valor > LIMITE_13010) return LIMITE_13010;
    return valor * FACTOR_13010;
}
