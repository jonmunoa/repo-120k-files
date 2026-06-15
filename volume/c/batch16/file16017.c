// fichero 16017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16017;

Registro16017 crear_registro16017(int id) {
    Registro16017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
