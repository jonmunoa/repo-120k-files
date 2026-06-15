// fichero 3186 -- macros y constantes -- MODIFICADO
#define LIMITE_3186 3386
#define FACTOR_3186 3

int aplicar_limite3186(int valor) {
    if (valor > LIMITE_3186) return LIMITE_3186;
    return valor * FACTOR_3186;
}
