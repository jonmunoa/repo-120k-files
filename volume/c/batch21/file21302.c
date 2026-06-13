// fichero 21302 -- macros y constantes
#define LIMITE_21302 21402
#define FACTOR_21302 3

int aplicar_limite21302(int valor) {
    if (valor > LIMITE_21302) return LIMITE_21302;
    return valor * FACTOR_21302;
}
