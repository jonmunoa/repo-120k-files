// fichero 3406 -- macros y constantes -- MODIFICADO
#define LIMITE_3406 3606
#define FACTOR_3406 3

int aplicar_limite3406(int valor) {
    if (valor > LIMITE_3406) return LIMITE_3406;
    return valor * FACTOR_3406;
}
