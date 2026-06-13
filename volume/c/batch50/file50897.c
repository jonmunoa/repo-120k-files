// fichero 50897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50897;

Registro50897 crear_registro50897(int id) {
    Registro50897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50897(Registro50897 r) {
    return r.valor + r.id;
}
