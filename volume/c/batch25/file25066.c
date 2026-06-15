// fichero 25066 -- macros y constantes -- MODIFICADO
#define LIMITE_25066 25266
#define FACTOR_25066 3

int aplicar_limite25066(int valor) {
    if (valor > LIMITE_25066) return LIMITE_25066;
    return valor * FACTOR_25066;
}
