// fichero 47513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47513;

Registro47513 crear_registro47513(int id) {
    Registro47513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
