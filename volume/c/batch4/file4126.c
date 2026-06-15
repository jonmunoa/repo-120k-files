// fichero 4126 -- macros y constantes -- MODIFICADO
#define LIMITE_4126 4326
#define FACTOR_4126 3

int aplicar_limite4126(int valor) {
    if (valor > LIMITE_4126) return LIMITE_4126;
    return valor * FACTOR_4126;
}
