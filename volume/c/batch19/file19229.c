// fichero 19229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19229;

Registro19229 crear_registro19229(int id) {
    Registro19229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19229(Registro19229 r) {
    return r.valor + r.id;
}
