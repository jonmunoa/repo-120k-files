// fichero 18062 -- macros y constantes -- MODIFICADO
#define LIMITE_18062 18262
#define FACTOR_18062 4

int aplicar_limite18062(int valor) {
    if (valor > LIMITE_18062) return LIMITE_18062;
    return valor * FACTOR_18062;
}
