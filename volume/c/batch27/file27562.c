// fichero 27562 -- macros y constantes -- MODIFICADO
#define LIMITE_27562 27762
#define FACTOR_27562 4

int aplicar_limite27562(int valor) {
    if (valor > LIMITE_27562) return LIMITE_27562;
    return valor * FACTOR_27562;
}
