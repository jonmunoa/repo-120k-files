// fichero 38918 -- macros y constantes
#define LIMITE_38918 39018
#define FACTOR_38918 4

int aplicar_limite38918(int valor) {
    if (valor > LIMITE_38918) return LIMITE_38918;
    return valor * FACTOR_38918;
}
