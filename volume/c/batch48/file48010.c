// fichero 48010 -- macros y constantes
#define LIMITE_48010 48110
#define FACTOR_48010 1

int aplicar_limite48010(int valor) {
    if (valor > LIMITE_48010) return LIMITE_48010;
    return valor * FACTOR_48010;
}
