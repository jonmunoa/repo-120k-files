// fichero 6226 -- macros y constantes
#define LIMITE_6226 6326
#define FACTOR_6226 2

int aplicar_limite6226(int valor) {
    if (valor > LIMITE_6226) return LIMITE_6226;
    return valor * FACTOR_6226;
}
