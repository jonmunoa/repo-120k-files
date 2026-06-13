// fichero 27514 -- macros y constantes
#define LIMITE_27514 27614
#define FACTOR_27514 5

int aplicar_limite27514(int valor) {
    if (valor > LIMITE_27514) return LIMITE_27514;
    return valor * FACTOR_27514;
}
