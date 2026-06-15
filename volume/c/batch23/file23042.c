// fichero 23042 -- macros y constantes -- MODIFICADO
#define LIMITE_23042 23242
#define FACTOR_23042 4

int aplicar_limite23042(int valor) {
    if (valor > LIMITE_23042) return LIMITE_23042;
    return valor * FACTOR_23042;
}
