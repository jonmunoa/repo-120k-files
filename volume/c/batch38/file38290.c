// fichero 38290 -- macros y constantes
#define LIMITE_38290 38390
#define FACTOR_38290 1

int aplicar_limite38290(int valor) {
    if (valor > LIMITE_38290) return LIMITE_38290;
    return valor * FACTOR_38290;
}
