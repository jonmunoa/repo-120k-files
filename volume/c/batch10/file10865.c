// fichero 10865 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10865;

Registro10865 crear_registro10865(int id) {
    Registro10865 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
