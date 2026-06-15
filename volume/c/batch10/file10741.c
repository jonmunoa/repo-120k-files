// fichero 10741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10741;

Registro10741 crear_registro10741(int id) {
    Registro10741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
