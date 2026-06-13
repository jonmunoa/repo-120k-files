// fichero 36261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36261;

Registro36261 crear_registro36261(int id) {
    Registro36261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36261(Registro36261 r) {
    return r.valor + r.id;
}
