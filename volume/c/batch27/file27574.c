// fichero 27574 -- macros y constantes -- MODIFICADO
#define LIMITE_27574 27774
#define FACTOR_27574 6

int aplicar_limite27574(int valor) {
    if (valor > LIMITE_27574) return LIMITE_27574;
    return valor * FACTOR_27574;
}
