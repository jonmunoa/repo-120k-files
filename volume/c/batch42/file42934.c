// fichero 42934 -- macros y constantes
#define LIMITE_42934 43034
#define FACTOR_42934 5

int aplicar_limite42934(int valor) {
    if (valor > LIMITE_42934) return LIMITE_42934;
    return valor * FACTOR_42934;
}
