// fichero 10161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10161;

Registro10161 crear_registro10161(int id) {
    Registro10161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
