// fichero 8985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8985;

Registro8985 crear_registro8985(int id) {
    Registro8985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
