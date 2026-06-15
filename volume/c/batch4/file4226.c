// fichero 4226 -- macros y constantes -- MODIFICADO
#define LIMITE_4226 4426
#define FACTOR_4226 3

int aplicar_limite4226(int valor) {
    if (valor > LIMITE_4226) return LIMITE_4226;
    return valor * FACTOR_4226;
}
