// fichero 10513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10513;

Registro10513 crear_registro10513(int id) {
    Registro10513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
