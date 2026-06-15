// fichero 3898 -- macros y constantes -- MODIFICADO
#define LIMITE_3898 4098
#define FACTOR_3898 5

int aplicar_limite3898(int valor) {
    if (valor > LIMITE_3898) return LIMITE_3898;
    return valor * FACTOR_3898;
}
