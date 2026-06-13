// fichero 44226 -- macros y constantes
#define LIMITE_44226 44326
#define FACTOR_44226 2

int aplicar_limite44226(int valor) {
    if (valor > LIMITE_44226) return LIMITE_44226;
    return valor * FACTOR_44226;
}
