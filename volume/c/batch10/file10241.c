// fichero 10241 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10241;

Registro10241 crear_registro10241(int id) {
    Registro10241 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
