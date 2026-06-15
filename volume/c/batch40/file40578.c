// fichero 40578 -- macros y constantes -- MODIFICADO
#define LIMITE_40578 40778
#define FACTOR_40578 5

int aplicar_limite40578(int valor) {
    if (valor > LIMITE_40578) return LIMITE_40578;
    return valor * FACTOR_40578;
}
