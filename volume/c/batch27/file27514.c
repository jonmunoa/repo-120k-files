// fichero 27514 -- macros y constantes -- MODIFICADO
#define LIMITE_27514 27714
#define FACTOR_27514 6

int aplicar_limite27514(int valor) {
    if (valor > LIMITE_27514) return LIMITE_27514;
    return valor * FACTOR_27514;
}
