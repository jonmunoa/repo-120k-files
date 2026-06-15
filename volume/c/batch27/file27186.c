// fichero 27186 -- macros y constantes -- MODIFICADO
#define LIMITE_27186 27386
#define FACTOR_27186 3

int aplicar_limite27186(int valor) {
    if (valor > LIMITE_27186) return LIMITE_27186;
    return valor * FACTOR_27186;
}
