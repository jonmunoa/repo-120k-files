// fichero 24186 -- macros y constantes
#define LIMITE_24186 24286
#define FACTOR_24186 2

int aplicar_limite24186(int valor) {
    if (valor > LIMITE_24186) return LIMITE_24186;
    return valor * FACTOR_24186;
}
