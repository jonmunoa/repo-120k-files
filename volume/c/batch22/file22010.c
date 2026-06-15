// fichero 22010 -- macros y constantes -- MODIFICADO
#define LIMITE_22010 22210
#define FACTOR_22010 2

int aplicar_limite22010(int valor) {
    if (valor > LIMITE_22010) return LIMITE_22010;
    return valor * FACTOR_22010;
}
