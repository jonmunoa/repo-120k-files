// fichero 9042 -- macros y constantes -- MODIFICADO
#define LIMITE_9042 9242
#define FACTOR_9042 4

int aplicar_limite9042(int valor) {
    if (valor > LIMITE_9042) return LIMITE_9042;
    return valor * FACTOR_9042;
}
