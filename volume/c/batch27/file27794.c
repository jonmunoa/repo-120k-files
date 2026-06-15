// fichero 27794 -- macros y constantes -- MODIFICADO
#define LIMITE_27794 27994
#define FACTOR_27794 6

int aplicar_limite27794(int valor) {
    if (valor > LIMITE_27794) return LIMITE_27794;
    return valor * FACTOR_27794;
}
