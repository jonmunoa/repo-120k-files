// fichero 3574 -- macros y constantes -- MODIFICADO
#define LIMITE_3574 3774
#define FACTOR_3574 6

int aplicar_limite3574(int valor) {
    if (valor > LIMITE_3574) return LIMITE_3574;
    return valor * FACTOR_3574;
}
