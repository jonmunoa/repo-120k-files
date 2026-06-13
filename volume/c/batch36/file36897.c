// fichero 36897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36897;

Registro36897 crear_registro36897(int id) {
    Registro36897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36897(Registro36897 r) {
    return r.valor + r.id;
}
