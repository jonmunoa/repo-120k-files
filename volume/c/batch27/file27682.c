// fichero 27682 -- macros y constantes -- MODIFICADO
#define LIMITE_27682 27882
#define FACTOR_27682 4

int aplicar_limite27682(int valor) {
    if (valor > LIMITE_27682) return LIMITE_27682;
    return valor * FACTOR_27682;
}
