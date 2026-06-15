// fichero 49186 -- macros y constantes -- MODIFICADO
#define LIMITE_49186 49386
#define FACTOR_49186 3

int aplicar_limite49186(int valor) {
    if (valor > LIMITE_49186) return LIMITE_49186;
    return valor * FACTOR_49186;
}
