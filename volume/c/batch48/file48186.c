// fichero 48186 -- macros y constantes -- MODIFICADO
#define LIMITE_48186 48386
#define FACTOR_48186 3

int aplicar_limite48186(int valor) {
    if (valor > LIMITE_48186) return LIMITE_48186;
    return valor * FACTOR_48186;
}
