// fichero 40346 -- macros y constantes -- MODIFICADO
#define LIMITE_40346 40546
#define FACTOR_40346 3

int aplicar_limite40346(int valor) {
    if (valor > LIMITE_40346) return LIMITE_40346;
    return valor * FACTOR_40346;
}
