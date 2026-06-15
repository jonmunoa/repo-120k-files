// fichero 10121 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10121;

Registro10121 crear_registro10121(int id) {
    Registro10121 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
