// fichero 31513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31513;

Registro31513 crear_registro31513(int id) {
    Registro31513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31513(Registro31513 r) {
    return r.valor + r.id;
}
