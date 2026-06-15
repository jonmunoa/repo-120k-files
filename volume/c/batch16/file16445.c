// fichero 16445 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16445;

Registro16445 crear_registro16445(int id) {
    Registro16445 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
