// fichero 32042 -- macros y constantes -- MODIFICADO
#define LIMITE_32042 32242
#define FACTOR_32042 4

int aplicar_limite32042(int valor) {
    if (valor > LIMITE_32042) return LIMITE_32042;
    return valor * FACTOR_32042;
}
