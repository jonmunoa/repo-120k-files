// fichero 16186 -- macros y constantes -- MODIFICADO
#define LIMITE_16186 16386
#define FACTOR_16186 3

int aplicar_limite16186(int valor) {
    if (valor > LIMITE_16186) return LIMITE_16186;
    return valor * FACTOR_16186;
}
