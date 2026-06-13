// fichero 4226 -- macros y constantes
#define LIMITE_4226 4326
#define FACTOR_4226 2

int aplicar_limite4226(int valor) {
    if (valor > LIMITE_4226) return LIMITE_4226;
    return valor * FACTOR_4226;
}
