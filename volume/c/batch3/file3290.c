// fichero 3290 -- macros y constantes -- MODIFICADO
#define LIMITE_3290 3490
#define FACTOR_3290 2

int aplicar_limite3290(int valor) {
    if (valor > LIMITE_3290) return LIMITE_3290;
    return valor * FACTOR_3290;
}
