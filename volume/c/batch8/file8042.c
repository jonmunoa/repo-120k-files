// fichero 8042 -- macros y constantes -- MODIFICADO
#define LIMITE_8042 8242
#define FACTOR_8042 4

int aplicar_limite8042(int valor) {
    if (valor > LIMITE_8042) return LIMITE_8042;
    return valor * FACTOR_8042;
}
