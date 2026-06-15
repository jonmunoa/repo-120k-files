// fichero 10265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10265;

Registro10265 crear_registro10265(int id) {
    Registro10265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
