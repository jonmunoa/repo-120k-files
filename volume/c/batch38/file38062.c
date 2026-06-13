// fichero 38062 -- macros y constantes
#define LIMITE_38062 38162
#define FACTOR_38062 3

int aplicar_limite38062(int valor) {
    if (valor > LIMITE_38062) return LIMITE_38062;
    return valor * FACTOR_38062;
}
