// fichero 25898 -- macros y constantes -- MODIFICADO
#define LIMITE_25898 26098
#define FACTOR_25898 5

int aplicar_limite25898(int valor) {
    if (valor > LIMITE_25898) return LIMITE_25898;
    return valor * FACTOR_25898;
}
