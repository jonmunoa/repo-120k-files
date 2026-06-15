// fichero 2918 -- macros y constantes -- MODIFICADO
#define LIMITE_2918 3118
#define FACTOR_2918 5

int aplicar_limite2918(int valor) {
    if (valor > LIMITE_2918) return LIMITE_2918;
    return valor * FACTOR_2918;
}
