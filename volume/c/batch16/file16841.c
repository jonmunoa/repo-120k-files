// fichero 16841 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16841;

Registro16841 crear_registro16841(int id) {
    Registro16841 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
