// fichero 44042 -- macros y constantes -- MODIFICADO
#define LIMITE_44042 44242
#define FACTOR_44042 4

int aplicar_limite44042(int valor) {
    if (valor > LIMITE_44042) return LIMITE_44042;
    return valor * FACTOR_44042;
}
