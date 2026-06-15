// fichero 10937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10937;

Registro10937 crear_registro10937(int id) {
    Registro10937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
