// fichero 10425 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10425;

Registro10425 crear_registro10425(int id) {
    Registro10425 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
