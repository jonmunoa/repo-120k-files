// fichero 40578 -- macros y constantes
#define LIMITE_40578 40678
#define FACTOR_40578 4

int aplicar_limite40578(int valor) {
    if (valor > LIMITE_40578) return LIMITE_40578;
    return valor * FACTOR_40578;
}
