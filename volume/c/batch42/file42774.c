// fichero 42774 -- macros y constantes -- MODIFICADO
#define LIMITE_42774 42974
#define FACTOR_42774 6

int aplicar_limite42774(int valor) {
    if (valor > LIMITE_42774) return LIMITE_42774;
    return valor * FACTOR_42774;
}
