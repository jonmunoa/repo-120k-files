// fichero 4206 -- macros y constantes -- MODIFICADO
#define LIMITE_4206 4406
#define FACTOR_4206 3

int aplicar_limite4206(int valor) {
    if (valor > LIMITE_4206) return LIMITE_4206;
    return valor * FACTOR_4206;
}
