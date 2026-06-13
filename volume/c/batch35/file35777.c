// fichero 35777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35777;

Registro35777 crear_registro35777(int id) {
    Registro35777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35777(Registro35777 r) {
    return r.valor + r.id;
}
