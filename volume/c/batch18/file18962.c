// fichero 18962 -- macros y constantes -- MODIFICADO
#define LIMITE_18962 19162
#define FACTOR_18962 4

int aplicar_limite18962(int valor) {
    if (valor > LIMITE_18962) return LIMITE_18962;
    return valor * FACTOR_18962;
}
