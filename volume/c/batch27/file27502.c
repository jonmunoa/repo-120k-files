// fichero 27502 -- macros y constantes
#define LIMITE_27502 27602
#define FACTOR_27502 3

int aplicar_limite27502(int valor) {
    if (valor > LIMITE_27502) return LIMITE_27502;
    return valor * FACTOR_27502;
}
