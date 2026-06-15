// fichero 10577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10577;

Registro10577 crear_registro10577(int id) {
    Registro10577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
