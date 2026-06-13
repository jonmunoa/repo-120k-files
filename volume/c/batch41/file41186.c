// fichero 41186 -- macros y constantes
#define LIMITE_41186 41286
#define FACTOR_41186 2

int aplicar_limite41186(int valor) {
    if (valor > LIMITE_41186) return LIMITE_41186;
    return valor * FACTOR_41186;
}
