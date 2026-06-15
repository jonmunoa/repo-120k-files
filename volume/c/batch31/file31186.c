// fichero 31186 -- macros y constantes -- MODIFICADO
#define LIMITE_31186 31386
#define FACTOR_31186 3

int aplicar_limite31186(int valor) {
    if (valor > LIMITE_31186) return LIMITE_31186;
    return valor * FACTOR_31186;
}
