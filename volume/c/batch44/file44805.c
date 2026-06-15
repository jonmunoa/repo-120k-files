// fichero 44805 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44805;

Registro44805 crear_registro44805(int id) {
    Registro44805 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
