// fichero 27762 -- macros y constantes -- MODIFICADO
#define LIMITE_27762 27962
#define FACTOR_27762 4

int aplicar_limite27762(int valor) {
    if (valor > LIMITE_27762) return LIMITE_27762;
    return valor * FACTOR_27762;
}
