// fichero 47513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47513;

Registro47513 crear_registro47513(int id) {
    Registro47513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47513(Registro47513 r) {
    return r.valor + r.id;
}
