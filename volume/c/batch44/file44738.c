// fichero 44738 -- macros y constantes -- MODIFICADO
#define LIMITE_44738 44938
#define FACTOR_44738 5

int aplicar_limite44738(int valor) {
    if (valor > LIMITE_44738) return LIMITE_44738;
    return valor * FACTOR_44738;
}
