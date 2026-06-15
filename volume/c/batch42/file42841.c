// fichero 42841 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42841;

Registro42841 crear_registro42841(int id) {
    Registro42841 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
