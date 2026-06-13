// fichero 42566 -- macros y constantes
#define LIMITE_42566 42666
#define FACTOR_42566 2

int aplicar_limite42566(int valor) {
    if (valor > LIMITE_42566) return LIMITE_42566;
    return valor * FACTOR_42566;
}
