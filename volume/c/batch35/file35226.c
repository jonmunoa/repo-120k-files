// fichero 35226 -- macros y constantes
#define LIMITE_35226 35326
#define FACTOR_35226 2

int aplicar_limite35226(int valor) {
    if (valor > LIMITE_35226) return LIMITE_35226;
    return valor * FACTOR_35226;
}
