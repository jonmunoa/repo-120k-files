// fichero 36753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36753;

Registro36753 crear_registro36753(int id) {
    Registro36753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36753(Registro36753 r) {
    return r.valor + r.id;
}
