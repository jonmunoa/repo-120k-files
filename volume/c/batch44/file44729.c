// fichero 44729 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44729;

Registro44729 crear_registro44729(int id) {
    Registro44729 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
