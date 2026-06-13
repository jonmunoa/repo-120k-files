// fichero 38226 -- macros y constantes
#define LIMITE_38226 38326
#define FACTOR_38226 2

int aplicar_limite38226(int valor) {
    if (valor > LIMITE_38226) return LIMITE_38226;
    return valor * FACTOR_38226;
}
