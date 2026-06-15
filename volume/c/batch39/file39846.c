// fichero 39846 -- macros y constantes -- MODIFICADO
#define LIMITE_39846 40046
#define FACTOR_39846 3

int aplicar_limite39846(int valor) {
    if (valor > LIMITE_39846) return LIMITE_39846;
    return valor * FACTOR_39846;
}
