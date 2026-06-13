// fichero 40226 -- macros y constantes
#define LIMITE_40226 40326
#define FACTOR_40226 2

int aplicar_limite40226(int valor) {
    if (valor > LIMITE_40226) return LIMITE_40226;
    return valor * FACTOR_40226;
}
