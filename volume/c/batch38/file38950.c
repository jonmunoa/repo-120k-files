// fichero 38950 -- macros y constantes
#define LIMITE_38950 39050
#define FACTOR_38950 1

int aplicar_limite38950(int valor) {
    if (valor > LIMITE_38950) return LIMITE_38950;
    return valor * FACTOR_38950;
}
