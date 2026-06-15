// fichero 40242 -- macros y constantes -- MODIFICADO
#define LIMITE_40242 40442
#define FACTOR_40242 4

int aplicar_limite40242(int valor) {
    if (valor > LIMITE_40242) return LIMITE_40242;
    return valor * FACTOR_40242;
}
