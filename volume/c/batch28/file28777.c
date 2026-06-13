// fichero 28777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28777;

Registro28777 crear_registro28777(int id) {
    Registro28777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28777(Registro28777 r) {
    return r.valor + r.id;
}
