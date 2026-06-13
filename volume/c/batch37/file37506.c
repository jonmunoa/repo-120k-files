// fichero 37506 -- macros y constantes
#define LIMITE_37506 37606
#define FACTOR_37506 2

int aplicar_limite37506(int valor) {
    if (valor > LIMITE_37506) return LIMITE_37506;
    return valor * FACTOR_37506;
}
