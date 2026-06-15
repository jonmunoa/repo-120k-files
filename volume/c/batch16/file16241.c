// fichero 16241 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16241;

Registro16241 crear_registro16241(int id) {
    Registro16241 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
