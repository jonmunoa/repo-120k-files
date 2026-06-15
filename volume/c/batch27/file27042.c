// fichero 27042 -- macros y constantes -- MODIFICADO
#define LIMITE_27042 27242
#define FACTOR_27042 4

int aplicar_limite27042(int valor) {
    if (valor > LIMITE_27042) return LIMITE_27042;
    return valor * FACTOR_27042;
}
