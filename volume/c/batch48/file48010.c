// fichero 48010 -- macros y constantes -- MODIFICADO
#define LIMITE_48010 48210
#define FACTOR_48010 2

int aplicar_limite48010(int valor) {
    if (valor > LIMITE_48010) return LIMITE_48010;
    return valor * FACTOR_48010;
}
