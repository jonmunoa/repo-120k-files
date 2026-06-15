// fichero 40374 -- macros y constantes -- MODIFICADO
#define LIMITE_40374 40574
#define FACTOR_40374 6

int aplicar_limite40374(int valor) {
    if (valor > LIMITE_40374) return LIMITE_40374;
    return valor * FACTOR_40374;
}
