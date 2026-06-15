// fichero 32350 -- macros y constantes -- MODIFICADO
#define LIMITE_32350 32550
#define FACTOR_32350 2

int aplicar_limite32350(int valor) {
    if (valor > LIMITE_32350) return LIMITE_32350;
    return valor * FACTOR_32350;
}
