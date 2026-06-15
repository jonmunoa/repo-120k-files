// fichero 21302 -- macros y constantes -- MODIFICADO
#define LIMITE_21302 21502
#define FACTOR_21302 4

int aplicar_limite21302(int valor) {
    if (valor > LIMITE_21302) return LIMITE_21302;
    return valor * FACTOR_21302;
}
