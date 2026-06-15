// fichero 27894 -- macros y constantes -- MODIFICADO
#define LIMITE_27894 28094
#define FACTOR_27894 6

int aplicar_limite27894(int valor) {
    if (valor > LIMITE_27894) return LIMITE_27894;
    return valor * FACTOR_27894;
}
