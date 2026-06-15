// fichero 20042 -- macros y constantes -- MODIFICADO
#define LIMITE_20042 20242
#define FACTOR_20042 4

int aplicar_limite20042(int valor) {
    if (valor > LIMITE_20042) return LIMITE_20042;
    return valor * FACTOR_20042;
}
