// fichero 12226 -- macros y constantes -- MODIFICADO
#define LIMITE_12226 12426
#define FACTOR_12226 3

int aplicar_limite12226(int valor) {
    if (valor > LIMITE_12226) return LIMITE_12226;
    return valor * FACTOR_12226;
}
