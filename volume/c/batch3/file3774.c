// fichero 3774 -- macros y constantes -- MODIFICADO
#define LIMITE_3774 3974
#define FACTOR_3774 6

int aplicar_limite3774(int valor) {
    if (valor > LIMITE_3774) return LIMITE_3774;
    return valor * FACTOR_3774;
}
