// fichero 19846 -- macros y constantes -- MODIFICADO
#define LIMITE_19846 20046
#define FACTOR_19846 3

int aplicar_limite19846(int valor) {
    if (valor > LIMITE_19846) return LIMITE_19846;
    return valor * FACTOR_19846;
}
