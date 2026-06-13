// fichero 44290 -- macros y constantes
#define LIMITE_44290 44390
#define FACTOR_44290 1

int aplicar_limite44290(int valor) {
    if (valor > LIMITE_44290) return LIMITE_44290;
    return valor * FACTOR_44290;
}
