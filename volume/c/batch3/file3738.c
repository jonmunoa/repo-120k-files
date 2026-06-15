// fichero 3738 -- macros y constantes -- MODIFICADO
#define LIMITE_3738 3938
#define FACTOR_3738 5

int aplicar_limite3738(int valor) {
    if (valor > LIMITE_3738) return LIMITE_3738;
    return valor * FACTOR_3738;
}
