// fichero 40566 -- macros y constantes -- MODIFICADO
#define LIMITE_40566 40766
#define FACTOR_40566 3

int aplicar_limite40566(int valor) {
    if (valor > LIMITE_40566) return LIMITE_40566;
    return valor * FACTOR_40566;
}
