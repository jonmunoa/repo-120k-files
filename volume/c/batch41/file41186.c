// fichero 41186 -- macros y constantes -- MODIFICADO
#define LIMITE_41186 41386
#define FACTOR_41186 3

int aplicar_limite41186(int valor) {
    if (valor > LIMITE_41186) return LIMITE_41186;
    return valor * FACTOR_41186;
}
