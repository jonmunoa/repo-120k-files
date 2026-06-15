// fichero 13574 -- macros y constantes -- MODIFICADO
#define LIMITE_13574 13774
#define FACTOR_13574 6

int aplicar_limite13574(int valor) {
    if (valor > LIMITE_13574) return LIMITE_13574;
    return valor * FACTOR_13574;
}
