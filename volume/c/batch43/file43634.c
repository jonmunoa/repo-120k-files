// fichero 43634 -- macros y constantes -- MODIFICADO
#define LIMITE_43634 43834
#define FACTOR_43634 6

int aplicar_limite43634(int valor) {
    if (valor > LIMITE_43634) return LIMITE_43634;
    return valor * FACTOR_43634;
}
