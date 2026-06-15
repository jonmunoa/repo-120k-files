// fichero 12186 -- macros y constantes -- MODIFICADO
#define LIMITE_12186 12386
#define FACTOR_12186 3

int aplicar_limite12186(int valor) {
    if (valor > LIMITE_12186) return LIMITE_12186;
    return valor * FACTOR_12186;
}
