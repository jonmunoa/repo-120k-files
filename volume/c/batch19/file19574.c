// fichero 19574 -- macros y constantes -- MODIFICADO
#define LIMITE_19574 19774
#define FACTOR_19574 6

int aplicar_limite19574(int valor) {
    if (valor > LIMITE_19574) return LIMITE_19574;
    return valor * FACTOR_19574;
}
